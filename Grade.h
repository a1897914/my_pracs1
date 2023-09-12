// Grade.h
#pragma once
#include <string>

class Grade {
public:
    Grade(const std::string& grade, double score) : grade(grade), score(score) {}
    std::string getGrades() const { return grade; }
    double getScore() const { return score; }
    void setGrade(const std::string& grade) { this->grade = grade; }
    void setScore(double score) { this->score = score; }

private:
    std::string grade;
    double score;
};


