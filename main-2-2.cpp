#include<iostream>

extern int bin_to_int(int binary_digits[], int number_of_digits);

int main(){
    int array[] = {1, 0, 0, 1};
    int size = sizeof(array)/sizeof(array[0]);

    int decimal = bin_to_int(array, size);
    std::cout << "Decimal value: " << decimal << std::endl;


}


