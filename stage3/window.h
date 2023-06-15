#ifndef WINDOW_H
#define WINDOW_H
#include "magneticsensor.h"
#include "magneticsensorview.h"

class Window
{
private:
    Window();
public:
    Window(MagneticSensor * sensor, );
    void changeState();
    MagneticSensor getSensor();
private:
    MagneticSensor * magneticSensor;
    bool isClose;
};

#endif // WINDOW_H
