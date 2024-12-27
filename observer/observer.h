#ifndef __OBSERVER__H
#define __OBSERVER__H

#include "weather.h"

template <typename T>
class Observer {
    public:
        virtual void update(T) = 0;
        virtual ~Observer() = default;
};

#endif
