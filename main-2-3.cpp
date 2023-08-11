#include<iostream>

extern int sum_integers(int integers[], int length);

int main(){
    int array1[] = {1, 2, 3, 4};
    int array2[] = {-1, 2, 2, -1};

    int length1 = sizeof(array1)/sizeof(array1[0]);
    int length2 = sizeof(array2)/sizeof(array2[0]);

    int sum1 = sum_integers(array1, length1);
    int sum2 = sum_integers(array2, length2);

    std::cout << "sum if palindrome array1: " << sum1 << std::endl;
    std::cout << "sum if palindrome array2: " << sum2 << std::endl;
}