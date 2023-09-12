#include "Student.h" // Include the Student class header

// Constructor for Student
Student::Student(const std::string& name, int age, const std::string& email, const std::string& studentID)
    : Person(name, age, email), studentID(studentID) {
    // Initialize any additional attributes specific to students if needed
}

// You can define additional methods specific to students here
