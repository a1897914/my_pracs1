#include <iostream>
#include <bitset> 
#include <string>

void print_binary_str(std::string decimal_number) {
    int decimal_value = std::stoi(decimal_number);
    std::bitset<32> binary(decimal_value); 

    
    int msb_position = binary.size() - 1;
    while (msb_position >= 0 && !binary[msb_position]) {
        msb_position--;
    }

    if (msb_position < 0) {
        std::cout << "0" << std::endl;
    } else {
        for (int i = msb_position; i >= 0; i--) {
            std::cout << binary[i];
        }
        std::cout << std::endl;
    }
}
