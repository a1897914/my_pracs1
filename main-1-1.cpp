#include<iostream>
#include"Asset.h"

int main() {
    Asset a1;
    std::cout << a1.get_product_type() << std::endl; 
    std::cout << a1.get_value() << std::endl; 

    Asset a2(1000, "inventory");
    std::cout << a2.get_product_type() << std::endl;
    std::cout << a2.get_value() << std::endl;

    return 0;
}
