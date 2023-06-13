#include "magnetic_sensor.h"

MagneticSensor::MagneticSensor(int z) : Sensor(z) {

}
void MagneticSensor::setSensorOpen() {
    setState(false);
}
void MagneticSensor::setSensorClose() {
    setState(true);
}
