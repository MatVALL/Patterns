#ifndef __SUBJECT__H
#define __SUBJECT__H
#include "observer.h"

class Subject {
    virtual void registerObserver(Observer *o) = 0;
    virtual void removeObserver(Observer *o) = 0;
    virtual void notifyObservers() = 0;
};
#endif
