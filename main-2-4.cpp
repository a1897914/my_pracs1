#include<iostream>

extern int sum_min_max(int integers[], int length);

int main(){
    int array[] = {3, 7, 2, 9, 5, 1};

    int length = sizeof(array) / sizeof(array[0]);

    int sum_min_max_result = sum_min_max(array, length);

    std::cout << "Sum of min and max elements: " << sum_min_max_result << std::endl;

    return 0;
}