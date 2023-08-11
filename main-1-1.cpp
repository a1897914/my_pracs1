#include<iostream>

extern void print_matrix(int array[10][10]);



int main() {
    int matrix[10][10] = {
        {1, 2, 3, 4, 5, 6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15, 16, 17, 18, 19, 20},
       
    };

    print_matrix(matrix);

    return 0;
}
