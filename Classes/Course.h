#include<iostream>
#include <string.h>
#include <vector>
using namespace std;


class Course
{
private:
    string name;
    int creditHours;
    string instructor;
    vector<Course*> prerequisites;
    string syllabous; //  basically a summary or outline of what a course will cover.
public:
    string getCourseName();
    int getCreditHours();
    string getInstructorName();

    






};
























