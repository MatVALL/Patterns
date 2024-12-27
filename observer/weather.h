#ifndef __WEATHER__H
#define __WEATHER__H
#include <cstdint>

class Weather {
    public:
        int8_t temperature;
        uint8_t humidity;
        Weather(int8_t temperature, uint8_t humidity);
        Weather();
};
#endif
