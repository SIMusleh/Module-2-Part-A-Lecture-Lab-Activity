#include "product.h"
#include "snack.h"
#include <iostream>


int main()
{
    product myProduct(23, "My first product", 3.99, 2);
    drink::flavType flav[2] = {drink::APPLE,
                               drink::BLUEBERRY};
    drink myDrink(true, false, drink::sizeType::LRG, flav, 2);
    myProduct.getPrice();
    iceCream myIceCream(iceCream::flavType::BUTTER_PECAN, 4);
    iceCream myIceCream2(iceCream::flavType::CARAMEL_SWIRL, 3);
    std::cout << myProduct.tostring() << std::endl;
    std::cout << myDrink.tostring() << std::endl;
    std::cout << myIceCream.tostring() << std::endl;
    std::cout << myIceCream2.tostring() << std::endl;

    // myProduct.price;
    // myDrink.getDescription();
    
    snack mySnack(snack::CHIPS, 45, "Spicy Chips", 2.48, 5, true);
    std::cout << mySnack.tostring() << std::endl;

    return 0;
}