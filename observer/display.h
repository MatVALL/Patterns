#ifndef __DISPLAY__H
#define __DISPLAY__H
#include "weatherdata.h"

class ForecastDisplay: public Observer {
    private:
        Weather current_weather;
        Weather previous_weather;
        void update(Weather w);
        void setWeather(Weather w);
    public:
        const Weather forecast();
        Weather getWeather(void);
        ForecastDisplay(Weather w);
};

class SimpleDisplay: public Observer {
    private:
        Weather weather;
        void update(Weather);
    public:
        void setWeather(Weather w);
        Weather getWeather(void);
        SimpleDisplay(Weather w);
};

#endif
