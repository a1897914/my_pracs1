#include<iostream>

extern int *readNumbers();
extern int secondSmallestSum(int *numbers,int length);


int main() {
    int *numbers = readNumbers();
    

    int result = secondSmallestSum(numbers, 10);
    
    std::cout << result << std::endl;

    return 0;
}