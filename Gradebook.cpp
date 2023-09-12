// Gradebook.cpp
#include "Gradebook.h"

void Gradebook::addGrade(const Student& student, const Grade& grade) {
    grades[student].push_back(grade);
}

std::vector<Grade> Gradebook::getGrades(const Student& student) const {
    if (grades.find(student) != grades.end()) {
        return grades.at(student);
    } else {
        return std::vector<Grade>();
    }
}
