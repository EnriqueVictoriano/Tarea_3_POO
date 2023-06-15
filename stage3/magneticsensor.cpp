#include "magneticsensor.h"

MagneticSensor::MagneticSensor(int z): Sensor(z) {
    view = new MagneticSensorView();
}
void MagneticSensor::setSensorOpen() {
    setState(false);
}
void MagneticSensor::setSensorClose() {
   setState(true);
}
MagneticSensorView * MagneticSensor::getView() {
    return view;
}
MagneticSensor::~MagneticSensor(){
    delete view;
}
