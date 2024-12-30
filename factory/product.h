#ifndef __PRODUCT__H
#define __PRODUCT__H

class Chair {
    public:
        virtual bool hasLegs() = 0;
        virtual void sitOn() = 0;
        virtual ~Chair() = default;
};

class CoffeeTable {
    public:
        virtual void putStuffOn() = 0;
        virtual ~CoffeeTable() = default;
};

#endif
