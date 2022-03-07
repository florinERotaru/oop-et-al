#define _CRT_SECURE_NO_WARNINGS
#include "Student.h"
#include "string.h"
void Student::init() {
    name[0] = '\0';
    mathGrade = 0.0;
    historyGrade = 0;
    englishGrade = 0;
    averageGrade = 0;
}
void Student::setName(const char *name) {
    strcpy(this->name, name);
}

 const char* Student::getName() const {
    return name;
}

void Student::setMathGrade(float grade) {
    mathGrade = grade;
}

float Student::getMathGrade() const {
    return mathGrade;
}

void Student::setHistoryGrade(float grade) {
    historyGrade = grade;
}

float Student::getHistoryGrade() const {
    return historyGrade;
}

void Student::setEnglishGrade(float grade) {
    englishGrade = grade;
}

float Student::getEnglishGrade() const {
    return englishGrade;
}

void Student::setAvgGrade() {
    averageGrade = (englishGrade + mathGrade + historyGrade) / 3;
}

float Student::getAvgGrade(){
    this->setAvgGrade();
    return averageGrade;
}