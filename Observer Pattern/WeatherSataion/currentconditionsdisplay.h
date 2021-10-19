#ifndef CURRENTCONDITIONSDISPLAY_H
#define CURRENTCONDITIONSDISPLAY_H

#include "observer.h"
#include "displayelement.h"
#include "weatherdata.h"
#include "QDebug"

class CurrentConditionsDisplay:public Observer, DisplayElement
{
public:
    CurrentConditionsDisplay(WeatherData * weatherData);
    void update() override;
    void display() override;

private:
    float temperature;
    float humidity;
    WeatherData* weatherData;
};

#endif // CURRENTCONDITIONSDISPLAY_H
