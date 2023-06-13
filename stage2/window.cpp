#include "window.h"

Window::Window()
{

}
Window::Window(MagneticSensor sensor):magneticSensor() {
    magneticSensor = sensor;
}
void Window::changeState(){
    if(magneticSensor.isClose())
        magneticSensor.setSensorOpen();
    else
        magneticSensor.setSensorClose();
}

