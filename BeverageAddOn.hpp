#include "Beverage.hpp"

class BeverageAddOn: public Beverage {
public:
    virtual std::string getDescription() = 0;
    virtual float getCost() = 0;
};

class CaramelAddOn: public BeverageAddOn {
    Beverage& extendedBeverage_;
    std::string descriptionAddOn_ {" With Caramel!" };
    float addOnCost_ { 2 };
public:
    explicit CaramelAddOn(Beverage& b):
    extendedBeverage_(b) {};
    
    float getCost() override;
    std::string getDescription() override;
};

class ChocolateAddOn: public BeverageAddOn {
    Beverage& extendedBeverage_;
    std::string descriptionAddOn_ {" With Chocolate!" };

    float addOnCost_ { 2 };

public:
    explicit ChocolateAddOn(Beverage& b):
    extendedBeverage_(b){};

    float getCost() override;
    std::string getDescription() override;
};
