#ifndef __WEATHERDATA__H
#define __WEATHERDATA__H
#include "weather.h"
#include "subject.h"
#include "observer.h"
#include <set>
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Weather& w);

class WeatherData : public Subject {
    private:
        Weather data;
        std::set<Observer*> observers;
    public:
        WeatherData();
        WeatherData(Weather);
        ~WeatherData();
        void setData(Weather);
        void registerObserver(Observer *o);
        void removeObserver(Observer *o);
        void notifyObservers();
};
#endif
