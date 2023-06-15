#ifndef SENSOR_H
#define SENSOR_H

class Sensor
{
public:
    Sensor(int z=0, bool close=true);
    bool isClose() const;
    int getZone() const;
protected:
    void setState(bool close);
private:
    int zone;
    bool state;
};

#endif // SENSOR_H
