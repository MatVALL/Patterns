#ifndef __SUBJECT__H
#define __SUBJECT__H
#include "observer.h"

template <typename T>
class Subject {
    virtual void registerObserver(Observer<T> *o) = 0;
    virtual void removeObserver(Observer<T> *o) = 0;
    virtual void notifyObservers() = 0;
};
#endif
