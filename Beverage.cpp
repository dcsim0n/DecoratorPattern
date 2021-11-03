#include <string>
#include "Beverage.hpp"


std::string Espresso::getDescription() {
        return this->description_;
}

float Espresso::getCost() {
    return this->cost_;
}

std::string DripCoffee::getDescription() {
    return this->description_;
}

float DripCoffee::getCost() {
    return this->cost_;
}