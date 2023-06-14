#include "door.h"

Door::Door(int zone): magneticSensor(zone){
}

Door::Door(MagneticSensor sensor):magneticSensor() {
    magneticSensor = sensor;
}
void Door::changeState() {
        if (magneticSensor.isClose())
            magneticSensor.setSensorOpen();
        else
            magneticSensor.setSensorClose();
}
