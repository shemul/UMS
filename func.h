#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED
// added classes.h for all property for a project ..
#include "classes.h"

void show_header()
{
    cout <<"\t\t\t" << "UNIVERSITY MANAGEMNET SYSTEM"<<endl;
    cout <<"\t\t" << "American Internation University Bangladesh" <<endl;
    cout <<"\t\t\t" << "Programming Language 2 Project" <<endl<<endl<<endl<<endl;
}
void clear()
{
    system("CLS");
    show_header();
}
void show_main_options()
{
    show_header();
    cout << "1. Departments" <<endl ;
    cout << "2. Teachers" <<endl;
    cout << "3. Students" <<endl<<endl;
}
void show_dept_options()
{

    cout << "1. Add New Department" <<endl ;
    cout << "2. View All Dept" <<endl;

}
void show_teacher_options()
{

    cout << "1. Add New Teacher" <<endl ;
    cout << "2. View All Teacher list" <<endl;


}
void show_student_options()
{

    cout << "1. Add New Student" <<endl ;
    cout << "2. View All Student list" <<endl;

}

void dept_options()
{
    cout << "1. View Department List"<< endl ;
    cout << "2. Back to main menu"<< endl ;
}


#endif // FUNC_H_INCLUDED
