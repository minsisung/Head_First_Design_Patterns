#pragma once
#include <iostream>
#include "Pizza.h"

class NYStyleCheesePizza : public Pizza
{
public:
    NYStyleCheesePizza()
    {
        mName = std::string("NY Style Sauce and Cheese Pizza");
        mDough = std::string("Thing Crust Dough");
        mSauce = std::string("Marinara Sauce");
        mToppings.push_back(std::string("Grated Reggiano Cheese"));
    }
};

