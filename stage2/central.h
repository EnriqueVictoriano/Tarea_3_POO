#ifndef CENTRAL_H
#define CENTRAL_H

#include <iostream>
#include <vector>
#include "door.h"
#include "window.h"
using namespace std;

class Central {
public:
    Central();
    ~Central();

    void addDoor(Door* door);
    void addWindow(Window* window);
    void verifyZones();
private:
    vector<Door*> doors;
    vector<Window*> windows;

};

#endif // CENTRAL_H
