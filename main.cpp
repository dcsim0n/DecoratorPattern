#include <iostream>
#include "BeverageAddOn.hpp"


void printl(std::string s){
    std::cout << s << std::endl;
}
int main() {
  std::cout << "Hello World!\n";

  Espresso esp;
  printl("Espresso drink description: " + esp.getDescription());

  DripCoffee coffee;
  printl("Coffee drink description: " + coffee.getDescription());

  CaramelAddOn caramelCoffee(coffee);

  printl("Caramel cofee description: " + caramelCoffee.getDescription());

  ChocolateAddOn caramelChocolateCofee(caramelCoffee);

  printl("Chocolate Caramel Coffee description: " + caramelChocolateCofee.getDescription());

  printl("Coffee price: " + std::to_string(coffee.getCost()));
  printl("Chocolate Caramel Coffee price" + std::to_string(caramelChocolateCofee.getCost()));
}