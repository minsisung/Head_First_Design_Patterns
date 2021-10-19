#include "weatherdata.h"

WeatherData::WeatherData()
{

}

void WeatherData::registerObserver(Observer *ob)
{
    observers.push_back(ob);
}

void WeatherData::removeObserver(Observer *ob)
{
    observers.remove(observers.indexOf(ob));
}

void WeatherData::notifyObservers()
{
    for (auto observer : observers) {
        observer->update();
    }
}

void WeatherData::measurementsChanged()
{
    notifyObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure)
{
    this->temperature = temperature;
    this->humidity = humidity;
    this->pressure = pressure;
    measurementsChanged();
}

