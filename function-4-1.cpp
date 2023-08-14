#include<iostream>

int *readNumbers() {
    int *numbers = new int[10];
    
    for (int i = 0; i < 10; i++) {
        std::cin >> numbers[i];
    }
    
    return numbers;
}

int secondSmallestSum(int *numbers, int length) {
    int smallestSum = INT_MAX;
    int secondSmallestSum = INT_MAX;
    
    for (int start = 0; start < length; start++) {
        int currentSum = 0;
        
        for (int end = start; end < length; end++) {
            currentSum += numbers[end];
            
            if (currentSum < smallestSum) {
                secondSmallestSum = smallestSum;
                smallestSum = currentSum;
            } else if (currentSum < secondSmallestSum && currentSum != smallestSum) {
                secondSmallestSum = currentSum;
            }
        }
    }
    
    return secondSmallestSum;
}