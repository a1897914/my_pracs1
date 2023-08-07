#include "workshop.h"
#include<iostream>

int main() {
    double num = 10.5; 
    int size =5;

    std::cout << "Original value: " << num << std::endl;

    changeValue(&num);

    std::cout << "New value: " << num << std::endl;
    double* myArray = dynamicArray(size, num);

    double max = arrayMax(myArray, size);


    std::cout << "Array content: ";
    std::cout << "Maximum value in the array: " << max << std::endl;
    printArray(myArray, size);


    delete[] myArray;
    

    return 0;
}