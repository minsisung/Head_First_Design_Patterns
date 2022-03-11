#pragma once
#include "ChicagoStyleCheesePizza.h"
#include "PizzaStore.h"
class ChicagoStylePizzaStore : public PizzaStore
{
public:
    Pizza* CreatePizza(std::string type) override
    {
        Pizza* pizza = nullptr;
        if (type == std::string("Cheese"))
        {
            pizza = new ChicagoStyleCheesePizza();
        }
        return pizza;
    };
};