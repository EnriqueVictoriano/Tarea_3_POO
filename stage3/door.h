#ifndef DOOR_H
#define DOOR_H
#include "magneticsensor.h"
#include "magneticsensorview.h"
class DoorView;
class Door
{
private:
    Door(); // door creation without sensor is not allowed.
public:
    Door(MagneticSensor * sensor, DoorView * v);
    void changeState();
    MagneticSensor getSensor();
private:
    MagneticSensor * magneticSensor;
    DoorView * view;
    bool isClose;
};

#endif // DOOR_H
