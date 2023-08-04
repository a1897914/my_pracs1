#include<iostream>

extern int binary_to_int(int binary_digits[], int number_of_digits);

int main(){
    int binary_digits[] = {1, 2, 2, 1}; 
    int number_of_digits = sizeof(binary_digits) / sizeof(binary_digits[0]);

    int decimal_value = binary_to_int(binary_digits, number_of_digits);
    std::cout << "Decimal value: " << decimal_value << std::endl;

    return 0;
}