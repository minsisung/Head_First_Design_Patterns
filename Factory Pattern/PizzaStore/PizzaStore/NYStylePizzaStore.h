#pragma once
#include "NYStyleCheesePizza.h"
#include "PizzaStore.h"
class NYStylePizzaStore: public PizzaStore
{
public:
    Pizza* CreatePizza(std::string type) override
    {
        Pizza* pizza = nullptr;
        if (type == std::string("Cheese"))
        {
            pizza = new NYStyleCheesePizza();
        }
        return pizza;
    };
};

