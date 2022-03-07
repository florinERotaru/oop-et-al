#include "stdio.h"
#include "Student.h"
#include "globalfun.h"
int main()
{
    Student s1;
    s1.setName("Dan");
    //printf(s1.getName());
    s1.setMathGrade(6.5);
    s1.setEnglishGrade(8.0);
    s1.setHistoryGrade(9.0);
    s1.setAvgGrade();
    //==
    Student s2;
    s2.setName("Ion");
    //printf(s2.getName());
    s2.setMathGrade(4.5);
    s2.setEnglishGrade(6.0);
    s2.setHistoryGrade(10.0);
    s2.setAvgGrade();
    printf("%d \n ", compareByName(s1, s2));
    printf("%d \n ", compareByEnglish(s1, s2));
    printf("%d \n ", compareByHistory(s1, s2));
    printf("%d \n ", compareByMath(s1, s2));
    printf("%d \n ", compareByAverage(s1, s2));

}

