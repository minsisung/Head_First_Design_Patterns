#include <iostream>
#include "NYStylePizzaStore.h"
#include "ChicagoStylePizzaStore.h"

int main()
{
    PizzaStore* nyStylePizzaStore = new NYStylePizzaStore();
    PizzaStore* chicagoStylePizzaStore = new ChicagoStylePizzaStore();
    Pizza* npizza = nyStylePizzaStore->orderPizza(std::string("Cheese"));
    Pizza* cpizza = chicagoStylePizzaStore->orderPizza(std::string("Cheese"));
}