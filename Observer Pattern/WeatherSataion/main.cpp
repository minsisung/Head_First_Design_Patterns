#include <QCoreApplication>
#include "currentconditionsdisplay.h"
#include "heatindexdisplay.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    WeatherData *weatherData = new WeatherData;

    CurrentConditionsDisplay *currentDisplay = new CurrentConditionsDisplay(weatherData);
    HeatIndexDisplay *heatIndexDisplay = new HeatIndexDisplay(weatherData);

    weatherData->setMeasurements(80, 65, 30.4f);


    return a.exec();
}
