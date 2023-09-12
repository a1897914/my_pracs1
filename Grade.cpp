// Grade.cpp
#include "Grade.h"

Grade::Grade(const std::string& grade, double score) : grade(grade), score(score) {}

std::string Grade::getGrades() const {
    return grade;
}

double Grade::getScore() const {
    return score;
}

void Grade::setGrade(const std::string& newType) {
    grade = newType;
}

void Grade::setScore(double newScore) {
    score = newScore;
}
