#pragma once
#include <iostream>
#include "Pizza.h"

class ChicagoStyleCheesePizza : public Pizza
{
public:
    ChicagoStyleCheesePizza()
    {
        mName = std::string("Chicago Style Deep Dish Cheese Pizza");
        mDough = std::string("Extra Thick Crust Dough");
        mSauce = std::string("Plum Tomato Sauce");

        mToppings.push_back(std::string("Shredded Mozzarella Cheese"));
    }
    void cut() override { std::cout << "Chicago Style cut\n"; } ;
};

