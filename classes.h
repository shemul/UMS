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
    void set_dept_id(int i)
    {
        dept_id = i ;
    }
    void set_dept_name(string n)
    {
        dept_name = n ;
    }
    void show_dept_information()
    {
        cout << "Department ID : " << dept_id<<endl;
        cout << "Department Name : " << dept_name << endl;
    }
};

class teacher:public dept
{

    int teacher_id ;
    string teacher_name ;
    string courses ;
public:
    void set_teacher_id(int i)
    {
        teacher_id = i ;
    }
    void set_teacher_name(string n)
    {
        teacher_name = n ;
    }
    void set_courses(string c)
    {
        courses = c;
    }
    void show_teacher_information()
    {
        show_dept_information();
        cout << "Teacher ID : " << teacher_id << endl;
        cout << "Teacher Name : " << teacher_name << endl;
        cout << "Courses : " << courses <<endl;
    }
};
class student:public teacher
{

    int student_id ;
    string student_name;
public:
    void set_student_id(int i)
    {
        student_id = i;
    }
    void set_student_name(string n)
    {
        student_name = n;
    }

    void show_student_informations()
    {
        show_dept_information();
        show_teacher_information();
        cout << "Student ID : " << student_id << endl;
        cout << "Student Name : " << student_name << endl;
    }
};



#endif
