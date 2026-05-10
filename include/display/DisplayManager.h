#include "DisplayState.h"

class DisplayManager {
    private:
        DisplayState currentState;
        void updateDisplay();
    
    public:
    DisplayManager();
    DisplayManager(DisplayState initialState);
    DisplayState getCurrentDisplayState();
    void setCurrentDisplayState(DisplayState newState);
};