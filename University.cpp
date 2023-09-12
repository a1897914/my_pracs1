#include "University.h"

University::University(const std::string& name) : name(name) {}

void University::addCourse(const Course& course) {
    courses.push_back(course);
}

void University::addStudent(const Student& student) {
    students.push_back(student);
}

void University::addInstructor(const Instructor& instructor) {
    instructors.push_back(instructor);
}

std::vector<Course> University::getCourses() const {
    return courses;
}

std::vector<Student> University::getStudents() const {
    return students;
}

std::vector<Instructor> University::getInstructors() const {
    return instructors;
}
