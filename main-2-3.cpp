#include<iostream>

extern int sum_if_palindrome (int integers[], int length);


int main(){
    int array1[] = {1, 2, 3, 2, 1};
    int array2[] = {1, 2, 3, 4, 5};
    int array3[] = {1, 2, 3, 2, 1, 0};

    int length1 = sizeof(array1) / sizeof(array1[0]);
    int length2 = sizeof(array2) / sizeof(array2[0]);
    int length3 = sizeof(array3) / sizeof(array3[0]);

    int sum1 = sum_if_palindrome(array1, length1);
    int sum2 = sum_if_palindrome(array2, length2);
    int sum3 = sum_if_palindrome(array3, length3);

    std::cout << "Sum if palindrome arr1: " << sum1 << std::endl;
    std::cout << "Sum if palindrome arr2: " << sum2 << std::endl;
    std::cout << "Sum if palindrome arr3: " << sum3 << std::endl;

    return 0;
}