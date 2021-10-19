#include "currentconditionsdisplay.h"

CurrentConditionsDisplay::CurrentConditionsDisplay(WeatherData * weatherData)
{
    this->weatherData = weatherData;
    weatherData->registerObserver(this);
}

void CurrentConditionsDisplay::update()
{
    this->temperature = weatherData->getTemperature();
    this->humidity = weatherData->getHumidity();
    display();
}

void CurrentConditionsDisplay::display()
{
    qDebug()<<"Current conditions: " << temperature << "F degrees and " << humidity << "% humidity"<<Qt::endl;
}
