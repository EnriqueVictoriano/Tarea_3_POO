#include "central.h"

Central::Central(){

}

Central::~Central(){
    for (auto door : doors) {
        delete door;
    }

    for (auto window : windows) {
        delete window;
    }
}

//revisar funcionamiento 


void Central::addDoor(Door* door) {doors.push_back(door);                       
}

void Central::addWindow(Window* window) {windows.push_back(window);
}

void Central::verifyZones() {
    bool isAnyZoneOpen = false;

    for (auto door : doors) {           
        if (!door->getSensor().isClose()) {
            isAnyZoneOpen = true;
            break;
        }
    }
}
