// Gradebook.h
#pragma once
#include <map>
#include "Student.h"
#include "Grade.h"

class Gradebook {
public:
    void addGrade(const Student& student, const Grade& grade);
    std::vector<Grade> getGrades(const Student& student) const;
private:
    std::map<Student, std::vector<Grade>> grades;
};
