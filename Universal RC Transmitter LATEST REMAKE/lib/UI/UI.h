#ifndef UI_H
#define UI_H

#include <Arduino.h>

namespace UI
{
    enum Page : int8_t
    {
        NONE,
        main,
        settings,
        showJoysticks
    };

    class MenuPage;

    class Manager
    {
    public:
        //current menu index
        Page currentPage = Page::main;
        Page prevPage = Page::NONE;

        //Menu array
        MenuPage* menuPages[sizeof(Page)];

        Manager();
        void update();
    } extern manager;


    class MenuPage
    {
    public:
        //Menu elements
        virtual void update() = 0;
    };

    namespace Elements
    {
        class Element
        {
        public:
            char* name = "";

            Element(char* label) : name(label) {}
            virtual void action() = 0;
        };

        class MenuTransfer : public Element
        {
        public:
            Page destinationPage = Page::NONE;

            MenuTransfer(char* label, Page destPage) : Element(label), destinationPage(destPage) {};
    
            //Transfer to new page
            virtual void action() override;
        };
    }

    class ListPage : public MenuPage
    {
        #define LIST_SIZE 4

    public:
        Elements::Element* elements[LIST_SIZE];

        virtual void update() = 0;
    };

    class Info : public MenuPage
    {
    public:
        virtual void update() = 0;
    };

    class JoystickVis : public Info
    {
    public:
        void update() override;
    };
    
    class MainMenu : public Info
    {
    public:
        MainMenu();
        void update() override;
    };

    class SettingsMenu : public ListPage
    {
    public:
        SettingsMenu();
        void update() override;
    };
}

#endif