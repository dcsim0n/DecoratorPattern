#include <string>
#include "BeverageAddOn.hpp"


float CaramelAddOn::getCost() {
        return this->extendedBeverage_.getCost() + this->addOnCost_;
    }
std::string CaramelAddOn::getDescription() {
    return this->extendedBeverage_.getDescription() + this->descriptionAddOn_;
}

float ChocolateAddOn::getCost() {
    return this->extendedBeverage_.getCost() + this->addOnCost_;
}

std::string ChocolateAddOn::getDescription() {
    return this->extendedBeverage_.getDescription() + this->descriptionAddOn_;
}