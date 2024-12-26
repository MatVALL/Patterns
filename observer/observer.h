#ifndef __OBSERVER__H
#define __OBSERVER__H

#include "weather.h"

class Observer {
    public:
        virtual void update(Weather) = 0;
        virtual ~Observer() = default;
};

#endif
