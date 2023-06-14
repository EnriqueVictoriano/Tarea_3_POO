#include "door.h"

Door::Door(){
}

Door::Door(MagneticSensor sensor):magneticSensor() {
    magneticSensor = sensor;
}

Door::Door(int zone): magneticSensor(zone){
}
void Door::changeState() {
        if (magneticSensor.isClose())
            magneticSensor.setSensorOpen();
        else
            magneticSensor.setSensorClose();
}

