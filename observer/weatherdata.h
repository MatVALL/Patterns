#ifndef __WEATHERDATA__H
#define __WEATHERDATA__H
#include "subject.h"
#include "observer.h"
#include <vector>
#include <cstdint>
#include <iostream>

class Weather {
    public:
        int8_t temperature;
        uint8_t humidity;
        Weather(int8_t temperature, uint8_t humidity);
        Weather();
};

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
