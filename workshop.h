#include<iostream>

void changeValue(double* ptr) {
    *ptr = 42.0; 
}

double* dynamicArray(int size, double M) {
    double* array = new double[size]; 

    for (int i = 0; i < size; i++) {
        array[i] = M; 
    }
    return array;
}


void printArray(double* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}

double arrayMax(double* array, int size) {
    double maxVal = array[0]; 

    for (int i = 1; i < size; i++) {
        if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }

    return maxVal;
}
