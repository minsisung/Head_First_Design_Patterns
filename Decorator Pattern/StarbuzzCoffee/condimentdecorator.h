#ifndef CONDIMENTDECORATOR_H
#define CONDIMENTDECORATOR_H

#include "beverage.h"


class condimentDecorator:public Beverage
{
public:
    condimentDecorator();
    Beverage *beverage;
    virtual QString getDescription() = 0;
};


class Mocha:public condimentDecorator
{
public:
    Mocha(Beverage* beverage){
     this->beverage = beverage;
    }


    virtual QString getDescription() override{
        return beverage->getDescription() + ", Mocha";
    }

    double cost() override {
        return beverage->cost() + 0.2;
    }
};

class Whip:public condimentDecorator
{
public:
    Whip(Beverage* beverage){
     this->beverage = beverage;
    }


    virtual QString getDescription() override{
        return beverage->getDescription() + ", Whip";
    }

    double cost() override {
        return beverage->cost() + 0.5;
    }
};


class Soy:public condimentDecorator
{
public:
    Soy(Beverage* beverage){
     this->beverage = beverage;
    }


    virtual QString getDescription() override{
        return beverage->getDescription() + ", Soy";
    }

    double cost() override {
        return beverage->cost() + 0.3;
    }
};
#endif // CONDIMENTDECORATOR_H
