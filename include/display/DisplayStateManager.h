#include "DisplayState.h"

class DisplayStateManager {
    private:
        DisplayState currentState;
        void updateDisplay();
    
    public:
        DisplayState getCurrentDisplayState();
        void setCurrentDisplayState();
};