#pragma once
#include "Student.h"
int compareByName(const Student& s1, const Student& s2) {
    if (s1.getName() == s2.getName())
        return 0;
    if (s1.getName() > s2.getName())
        return 1;
    if (s1.getName() < s2.getName())
        return -1;
}
int compareByMath(const Student& s1, const Student& s2) {
    if (s1.getMathGrade() == s2.getMathGrade())
        return 0;
    if (s1.getMathGrade() > s2.getMathGrade())
        return 1;
    if (s1.getMathGrade() < s2.getMathGrade())
        return -1;
}
int compareByEnglish(const Student& s1, const Student& s2) {
    if (s1.getEnglishGrade() == s2.getEnglishGrade())
        return 0;
    if (s1.getEnglishGrade() > s2.getEnglishGrade())
        return 1;
    if (s1.getEnglishGrade() < s2.getEnglishGrade())
        return -1;
}
int compareByHistory(const Student& s1, const Student& s2) {
    if (s1.getHistoryGrade() == s2.getHistoryGrade())
        return 0;
    if (s1.getHistoryGrade() > s2.getHistoryGrade())
        return 1;
    if (s1.getHistoryGrade() < s2.getHistoryGrade())
        return -1;
}
int compareByAverage( Student& s1,  Student& s2) {
    if (s1.getAvgGrade() == s2.getAvgGrade())
        return 0;
    if (s1.getAvgGrade() > s2.getAvgGrade())
        return 1;
    if (s1.getAvgGrade() < s2.getAvgGrade())
        return -1;
}
