#pragma once
#include <iostream>
#include <vector>
class Pizza
{
public:

    std::string mName;
    std::string mDough;
    std::string mSauce;
    std::vector<std::string> mToppings;

    virtual void prepare() { std::cout << "Default Prepare\n"; };
    virtual void bake() { std::cout << "Default bake\n"; };
    virtual void cut() { std::cout << "Default cut\n"; };
    virtual void box() { std::cout << "Default box\n"; };
};

