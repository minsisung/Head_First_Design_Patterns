#ifndef BEVERAGE_H
#define BEVERAGE_H

#include "qstring.h"


class Beverage
{
public:
    Beverage();
    QString description = "Unknown Beverage";


    QString getDescription(){
        return description;
    }

    virtual double cost() = 0;
};


class Espresso: public Beverage
{
public:
    Espresso(){
        description = "Espresso";
    }
    double cost() override{
        return 1.99;
    };

};

class HouseBlend: public Beverage
{
public:
    HouseBlend(){
        description = "HouseBlend";
    }
    double cost() override{
        return 0.89;
    };

};

class DarkRoast: public Beverage
{
public:
    DarkRoast(){
        description = "DarkRoast";
    }
    double cost() override{
        return 2.49;
    };

};

#endif // BEVERAGE_H
