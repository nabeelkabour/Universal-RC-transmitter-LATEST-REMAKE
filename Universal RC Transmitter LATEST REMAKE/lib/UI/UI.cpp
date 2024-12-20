#include "UI.h"

UI::Manager manager;

UI::Manager::Manager()
{
    menuPages[Page::NONE] = nullptr;
    menuPages[Page::main] = &UI::MainMenu();
    menuPages[Page::settings] = &UI::SettingsMenu();

    currentPage = Page::main;
}

void UI::Manager::update()
{
    menuPages[currentPage]->update();
}

//*************************Main Menu*********************************

void UI::MainMenu::update()
{
    
}

//**********************************************************************

void UI::Elements::MenuTransfer::action()
{
    manager.prevPage = manager.currentPage;
    manager.currentPage = destinationPage;
}

UI::SettingsMenu::SettingsMenu()
{
    elements[0] = &Elements::MenuTransfer("Settings", Page::settings);
}

void UI::SettingsMenu::update()
{

}