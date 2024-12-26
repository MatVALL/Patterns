#ifndef __WEATHERDATA__H
#define __WEATHERDATA__H
#include "weather.h"
#include "subject.h"
#include "observer.h"
#include <vector>
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Weather& w);

class WeatherData : public Subject {
    private:
        Weather data;
        std::vector<Observer*> observers;
        void notifyObserver();
    public:
        WeatherData();
        ~WeatherData();
        void setData(Weather);
};
#endif
