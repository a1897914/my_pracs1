#include<iostream>

extern int *readNumbers();
extern bool equalsArray(int *numbers1, int *numbers2, int length);

int main() {
    int *numbers1 = readNumbers();
    int *numbers2 = readNumbers();
    
    bool result = equalsArray(numbers1, numbers2, 10);
    std::cout << std::boolalpha << result << std::endl;
    
    delete[] numbers1;
    delete[] numbers2;

    return 0;
}