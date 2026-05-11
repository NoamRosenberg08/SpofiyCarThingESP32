#include <Arduino.h>
#include "display/DisplayManager.h"


DisplayManager displayManager;

void setup() {
  displayManager = DisplayManager();
}

void loop() {
  displayManager.loop();
}