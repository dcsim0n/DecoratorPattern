class Beverage {
public:
    virtual std::string getDescription() = 0;
    virtual float getCost() = 0;
};

class Espresso: public Beverage {
    protected:
    std::string description_ {"A concentrated extraction from finely ground coffee beans. Often being thicker with more complex flavor"} ;
    float cost_ {4};
public:
    std::string getDescription() override;
    float getCost() override;
};

class DripCoffee: public Beverage {
protected:
    std::string description_ { "Brewed by slowly pouring heated \
    water over coursely ground coffee beans. Servings will often \
    be larger due to less concentrated flavor and caffeine." };
    float cost_ {3.4};
public:
    std::string getDescription() override;
    float getCost() override;
};