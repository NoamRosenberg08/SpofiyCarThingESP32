#include "../include/display/DisplayManager.h"
#include "../include/display/DisplayManagerConstants.h"
#include "../include/display/DisplayActions.h"

DisplayManager::DisplayManager(DisplayState initialState){
    this->currentState = initialState;
    this->updateDisplayByState(initialState);
}

void DisplayManager::updateDisplayByState(DisplayState state) {
    switch (state)
    {
    case DisplayState::MAIN_MENU:
        DisplayActions::displayMainMenu();
        break;
    case DisplayState::WIFI:
        DisplayActions::displayWiFiMenu();
        break;
    case DisplayState::LIBRARY:
        DisplayActions::displayLibraryMenu();
        break;
    case DisplayState::CURRENT_SONG:
        DisplayActions::displayCurrentSongScreen();
        break;
    default:
        break;
    }
}

DisplayState DisplayManager::getCurrentDisplayState() {
    return this->currentState;
}

void DisplayManager::setCurrentDisplayState(DisplayState newState) {
    this->currentState = newState;
}

void DisplayManager::loop() {
    // This function can be used to handle any periodic updates to the display
}



