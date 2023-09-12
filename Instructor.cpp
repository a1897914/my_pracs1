// Instructor.cpp
#include "Instructor.h"

Instructor::Instructor(const std::string& name, int age, const std::string& email, const std::string& employeeID)
    : Person(name, age, email), employeeID(employeeID) {}

std::string Instructor::getEmployeeID() const {
    return employeeID;
}

void Instructor::setEmployeeID(const std::string& newEmployeeID) {
    employeeID = newEmployeeID;
}

// Additional methods for instructors
void Instructor::teach() {
    // Method to teach a subject
}

void Instructor::prepareLesson() {
    // Method to prepare a lesson
}

void Instructor::gradeStudent() {
    // Method to grade a student
}
