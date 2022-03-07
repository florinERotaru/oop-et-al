#pragma once
class Student {
    char name[200];
    float mathGrade;
    float englishGrade;
    float historyGrade;
    float averageGrade;
    
  public:
    void init();
    void setName(const char *name);
    const char* getName() const;

    void setMathGrade(float grade);
    float getMathGrade() const;

    void setHistoryGrade(float grade);
    float getHistoryGrade() const;

    void setEnglishGrade(float grade);
    float getEnglishGrade() const;

    void setAvgGrade();
    float getAvgGrade();


};
