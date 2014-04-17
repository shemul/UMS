#ifndef MISC_H_INCLUDED
#define MISC_H_INCLUDED


#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <fstream>
using namespace std;

class dept
{
    int dept_id ;
    string dept_name;
public:
    void set_teacher_id(int i)
    {
        dept_id = i ;
    }
    void set_teacher_name(string n)
    {
        dept_name = n ;
    }
};

class teacher:public dept
{
public:
    int teacher_id ;
    string teacher_name ;
    string teacher_courses ;
};
class student:public teacher
{
public :
    int student_id ;
    string student_name;
};



#endif
