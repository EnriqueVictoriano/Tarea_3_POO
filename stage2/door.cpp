#include "door.h"

Door::Door()
{

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
