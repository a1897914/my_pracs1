#include "Course.h"

Course::Course(const std::string& code, const std::string& title) : code(code), title(title) {}

void Course::setInstructor(const Instructor& instructor) {
    this->instructor = instructor;
}

void Course::enrollStudent(const Student& student) {
    enrolledStudents.push_back(student);
}

void Course::addGrade(const std::string& studentId, const std::string& assignment, double grade) {
    Student student = findStudentById(studentId);
    Grade newGrade(assignment, grade);

    gradebook.addGrade(student, newGrade);
}



Instructor Course::getInstructor() const {
    return instructor;
}

std::vector<Student> Course::getEnrolledStudents() const {
    return enrolledStudents;
}

Gradebook Course::getGradebook() const {
    return gradebook;
}
