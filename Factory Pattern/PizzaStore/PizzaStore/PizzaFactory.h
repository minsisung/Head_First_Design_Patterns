#pragma once
#include <iostream>
#include "Pizza.h"
#include "CheesePizza.h"


class PizzaFactory
{
public:
    PizzaFactory() {};

    Pizza* CreatePizza(std::string type)
    {
        Pizza* pizza = nullptr;

        if (type == std::string("Cheese"))
        {
            pizza = new CheesePizza();
        }

        return pizza;
    }
};

