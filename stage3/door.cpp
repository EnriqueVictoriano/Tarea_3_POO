#include "door.h"
#include "doorview.h"

Door::Door()
{

}
Door::Door(MagneticSensor * sensor, DoorView * v): magneticSensor() {
    magneticSensor = sensor;
    isClose=true;
    view->setDoorModel(this);
}
void Door::changeState() {
    if (magneticSensor->isClose()) {
       magneticSensor->setSensorOpen();
        isClose=false;
    } else {
       magneticSensor->setSensorClose();
        isClose=true;
    }
}

