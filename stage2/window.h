#ifndef WINDOW_H
#define WINDOW_H
#include "magnetic_sensor.h"

class Window
{
private:
    Window(); // a window without a sensor is also not allowed
public:
    Window(MagneticSensor sensor);
    void changeState();
private:
    MagneticSensor magneticSensor;
};

#endif // WINDOW_H

