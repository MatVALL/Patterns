#ifndef __WEATHERDATA__H
#define __WEATHERDATA__H
#include "weather.h"
#include "subject.h"
#include "observer.h"
#include <set>
#include <iostream>

std::ostream& operator<<(std::ostream& os, const Weather& w);

class WeatherData : public Subject<Weather> {
    private:
        Weather data;
        std::set<Observer<Weather>*> observers;
    public:
        WeatherData();
        WeatherData(Weather);
        ~WeatherData();
        void setData(Weather);
        void registerObserver(Observer<Weather> *o);
        void removeObserver(Observer<Weather> *o);
        void notifyObservers();
};
#endif
