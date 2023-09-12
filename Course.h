#pragma once
#include <string>
#include <vector>
#include "Student.h"
#include "Instructor.h"
#include "Gradebook.h"

class Course {
public:
    Course(const std::string& code, const std::string& title);
    void setInstructor(const Instructor& instructor);
    void enrollStudent(const Student& student);
    void addGrade(const std::string& studentId, const std::string& assignment, double grade);
    Instructor getInstructor() const;
    std::vector<Student> getEnrolledStudents() const;
    Gradebook getGradebook() const;
private:
    std::string code;
    std::string title;
    Instructor instructor;
    std::vector<Student> enrolledStudents;
    Gradebook gradebook;
};
