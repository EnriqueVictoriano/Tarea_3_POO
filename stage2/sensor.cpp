#include "sensor.h"
#include <iostream>
using namespace std;
Sensor::Sensor(int z, bool close){
    zone = z;
    state = close;
}
bool Sensor::isClose() const {
    return state;
}
int Sensor::getZone() const {
    return zone;
}
void Sensor::setState(bool isClose) {
    close = isClose;
    cout << "Sensor is "<< (isClose?"close.":"open.") << endl;
}
