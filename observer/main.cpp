#include <iostream>
#include "weatherdata.h"
#include "display.h"

int main()
{
    Weather initial_weather;
    ForecastDisplay *fd = new ForecastDisplay(initial_weather);
    SimpleDisplay *sd = new SimpleDisplay(initial_weather);
    WeatherData *wd = new WeatherData(initial_weather);

    wd->registerObserver(fd);
    wd->registerObserver(sd);

    wd->setData(Weather(1,1));
    wd->notifyObservers();
    wd->setData(Weather(2,1));
    wd->notifyObservers();
    wd->setData(Weather(2,2));
    wd->notifyObservers();
    wd->setData(Weather(3,3));
    wd->notifyObservers();
    wd->removeObserver(fd);

    return 0;
}
