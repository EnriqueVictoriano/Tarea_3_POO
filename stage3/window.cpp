#include "window.h"
#include "windowview.h"

Window::Window()
{

}
Window::Window(MagneticSensor * sensor, WindowView * v): magneticSensor() {
    magneticSensor = sensor;
    isClose=true;
    view->setWindowModel(this);
}
void Window::changeState() {
    if(magneticSensor->isClose()) {
        magneticSensor->setSensorOpen();
    } else {
        magneticSensor->setSensorClose();
    }
}
