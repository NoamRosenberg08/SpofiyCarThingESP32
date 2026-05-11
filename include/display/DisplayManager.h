#include "DisplayState.h"
#include "DisplayManagerConstants.h"

class DisplayManager {
    private:
        DisplayState currentState;
        void updateDisplayByState(DisplayState state);
    
    public:
    DisplayManager(DisplayState initialState = DisplayManagerConstants::DEFAULT_STATE);
    DisplayState getCurrentDisplayState();
    void setCurrentDisplayState(DisplayState newState);
    void loop();
};