#include<iostream>

extern void hexDigits(int *numbers,int length);
extern int *readNumbers();

int main() {
    int *numbers = readNumbers();
    hexDigits(numbers, 10);
    delete[] numbers;

    return 0;
}