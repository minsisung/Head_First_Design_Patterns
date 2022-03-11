#pragma once
#include <iostream>
#include "Pizza.h"

class PizzaStore
{
public:

    Pizza* orderPizza(std::string type)
    {
        Pizza* pizza = nullptr;
        pizza = CreatePizza(type);

        pizza->prepare();
        pizza->bake();
        pizza->cut();
        pizza->box();

        return pizza;
    }

    // Factory Method
    virtual Pizza* CreatePizza(std::string type) = 0;
};

