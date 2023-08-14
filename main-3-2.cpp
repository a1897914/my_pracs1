#include<iostream>

extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);
extern int *reverseArray(int *numbers1, int length);

int main() {
    int *numbers1 = readNumbers();
    
    int *reversedArray = reverseArray(numbers1, 10);
    
    bool result = equalsArray(numbers1, reversedArray, 10);
    std::cout << std::boolalpha << result << std::endl;
    
    delete[] numbers1;
    delete[] reversedArray;

    return 0;
}