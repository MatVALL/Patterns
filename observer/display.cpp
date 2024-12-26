#include "display.h"

/* {{{ ForecastDisplay */
std::ostream& operator<<(std::ostream& os, ForecastDisplay& fd)
{
    Weather w = fd.forecast();
    return os << "forecast=(" << w << ") current=(" << fd.getWeather() << ")";
}

void ForecastDisplay::update(Weather w) {
    setWeather(w);
    std::cout << *this << std::endl;
}

void ForecastDisplay::setWeather(Weather updated_weather) {
    previous_weather = current_weather;
    current_weather = updated_weather;
}

const Weather ForecastDisplay::forecast()
{
    int8_t fc_temperature = 2 * current_weather.temperature - previous_weather.temperature;
    uint8_t fc_humidity =  2 * current_weather.humidity - previous_weather.humidity;
    return Weather(fc_temperature, fc_humidity);
}

ForecastDisplay::ForecastDisplay(Weather w) : current_weather(w) {}

Weather ForecastDisplay::getWeather() {
    return current_weather;
}

/* }}} */
/* {{{ SimpleDisplay */

std::ostream& operator<<(std::ostream& os, SimpleDisplay& fd)
{
    return os << "weather=" << fd.getWeather();
}

void SimpleDisplay::update(Weather w) {
    setWeather(w);
    std::cout << *this << std::endl;
}

void SimpleDisplay::setWeather(Weather updated_weather) {
    weather = updated_weather;
}
Weather SimpleDisplay::getWeather() {
    return weather;
}

SimpleDisplay::SimpleDisplay(Weather w) : weather(w) {}

/* }}} */
