#ifndef WEATHERDATA_H
#define WEATHERDATA_H

#include "subject.h"


class WeatherData: public Subject
{
public:
    WeatherData();
    void registerObserver(Observer *ob) override;
    void removeObserver(Observer *ob) override;
    void notifyObservers() override;
    void measurementsChanged();
    void setMeasurements(float temperature, float humidity, float pressure);
    float getTemperature() {return temperature;}
    float getHumidity() {return humidity;}
private:
    QVector<Observer*> observers;
    float temperature;
    float humidity;
    float pressure;
};

#endif // WEATHERDATA_H
