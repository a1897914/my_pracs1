#include "Student.h" // Include the Student class header

// Constructor for Student
Student::Student(const std::string& name, int age, const std::string& email, const std::string& studentID)
    : Person(name, age, email), studentID(studentID) {
    // Initialize any additional attributes specific to students if needed
}

// Getter for studentID
std::string Student::getStudentID() const {
    return studentID;
}

// Setter for studentID
void Student::setStudentID(const std::string& newStudentID) {
    studentID = newStudentID;
}

// You can define additional methods specific to students here
