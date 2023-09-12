#pragma once
#include <vector>
#include "Course.h"
#include "Student.h"
#include "Instructor.h"

class University {
public:
    University(const std::string& name);
    void addCourse(const Course& course);
    void addStudent(const Student& student);
    void addInstructor(const Instructor& instructor);
    std::vector<Course> getCourses() const;
    std::vector<Student> getStudents() const;
    std::vector<Instructor> getInstructors() const;
private:
    std::string name;
    std::vector<Course> courses;
    std::vector<Student> students;
    std::vector<Instructor> instructors;
};

