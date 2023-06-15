#include "window.h"

Window::window()
{

}
Window::Window(MagneticSensor *sensor): magneticSensor() {
    magneticSensor = sensor;
    isClose=true;
}
void Window::changeState() {
    if(magneticSensor->isClose()) {
        magneticSensor->setSensorOpen();
    } else {
        magneticSensor->setSensorClose();
    }
}
