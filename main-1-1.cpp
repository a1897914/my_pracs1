#include<iostream>

extern void printNumbers(int *numbers,int length);
extern int *readNumbers();

int main(){
    int *numbers = readNumbers();
    printNumbers(numbers, 10);
    delete[] numbers;

    return 0;
}