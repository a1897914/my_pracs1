#include <iostream>
#include "Person.h"
extern Person* createPersonArray(int n);

int main() {
    int n = 5;
    Person* personArray = createPersonArray(n);

    if (personArray) {
        for (int i = 0; i < n; i++) {
            std::cout << "Person " << i + 1 << ":\nName: " << personArray[i].name << "\nAge: " << personArray[i].age << std::endl;
        }

        // Clean up memory
        delete[] personArray;
    } else {
        std::cout << "Invalid input for array size." << std::endl;
    }

    return 0;
}