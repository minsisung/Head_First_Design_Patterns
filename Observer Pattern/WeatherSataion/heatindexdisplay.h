#ifndef HEATINDEXDISPLAY_H
#define HEATINDEXDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "weatherdata.h"
#include "QDebug"

class HeatIndexDisplay:public Observer, DisplayElement
{
public:
    HeatIndexDisplay(WeatherData * weatherData);
    void update() override;
    void display() override;

private:
    float temperature;
    float humidity;
    WeatherData* weatherData;
    float computeHeatIndex(float t, float rh);
};

#endif // HEATINDEXDISPLAY_H
