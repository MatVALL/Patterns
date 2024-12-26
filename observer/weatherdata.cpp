#include "weatherdata.h"

Weather::Weather(int8_t temperature, uint8_t humidity):
    temperature(temperature), humidity(humidity) {}

Weather::Weather(): temperature(0), humidity(0) {}

std::ostream& operator<<(std::ostream& os, const Weather& w)
{
    return os << "temperature=" << int(w.temperature) << " humidity=" << int(w.humidity);
}

/* {{{ WeatherData */


WeatherData::WeatherData(): data(Weather(0, 0)) {}
WeatherData::WeatherData(Weather w): data(w) {}
WeatherData::~WeatherData() {
    for (auto obs: observers) {
        delete obs;
    }
}

void WeatherData::setData(Weather w) {
    data = w;
}

void WeatherData::notifyObservers() {
    for (Observer *obs: observers) {
        obs->update(data);
    }
}

void WeatherData::registerObserver(Observer *o) {
    observers.insert(o);
}

void WeatherData::removeObserver(Observer *o) {
    observers.erase(o);
}

/* }}} */
