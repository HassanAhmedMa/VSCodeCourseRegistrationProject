#include<iostream>
#include<Student.h>
using namespace std;

class Report
{
    Student* student;
    float gpa; // or we could make it in the student as display it here with a function
    vector<Grade> grade;
};