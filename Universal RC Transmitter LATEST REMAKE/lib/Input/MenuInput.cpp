#include <MenuInput.h>

Encoder Input::knob(PIN_ENC0, PIN_ENC1);  

// Input::Button Input::confirmButton(PIN_ENCB);
// Input::Button Input::backButton(PIN_BB);

// Input::UserInputs Input::inputs;

// Input::Button::Button(int8_t _pin) : pin(_pin) {}

// bool Input::Button::checkButton()
// {
//     bool isPressed = false;

//     bool btnState = digitalRead(pin);
//     if (btnState != prevBstate) 
//     {
//         prevBstate = btnState;
//         if (btnState == LOW)  
//         {
//             isPressed = true;
//         }
//         delay(20);
//     }

//     return isPressed;
// }

// void Input::update()
// {
//     inputs.knobVal = knob.read();

//     inputs.confirmBtn = confirmButton.checkButton();
//     inputs.backBtn = backButton.checkButton();
// }