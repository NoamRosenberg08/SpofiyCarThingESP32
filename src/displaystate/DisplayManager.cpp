#include "../include/display/DisplayManager.h"
#include "../include/display/DisplayManagerConstants.h"

DisplayManager::DisplayManager(DisplayState initialState){
    this->currentState = initialState;
    this->updateDisplay();
}

DisplayState DisplayManager::getCurrentDisplayState() {
    return this->currentState;
}

void DisplayManager::setCurrentDisplayState(DisplayState newState) {
    this->currentState = newState;
}

void DisplayManager::updateDisplay() {
}

