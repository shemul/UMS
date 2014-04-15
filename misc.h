#ifndef MISC_H_INCLUDED
#define MISC_H_INCLUDED

// All my header file !
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <fstream>
using namespace std;

//variables
string names , depts ;
int salaries , decision ;

class teacher
{
    private:
        string name ;
        string dept ;
        int salary ;

    public:
        teacher(string n , string d , int s)
        {
            name = n ;
            dept = d ;
            salary = s ;
             fstream teach_db("teacher.txt");
                teach_db << n << endl;
                teach_db << d << endl;
                teach_db << s << endl;
                teach_db.close();
        }
        string get_name()
        {
           return name ;
        }

};
// Screen Cleaner
void clean()
{
    system("cls");
}
void title()
{
    cout << "Welcome to UMS" << endl << endl ;
    cout << "Please Select your choice." << endl <<endl;
}
void get_option()
{
    title();
    cout << "1. Teacher" <<endl ;
    cout << "2. Students" << endl ;
    cout << "3. Course" << endl << endl;

    cout << "0. For exit" << endl;
}
void get_teacher_option()
{
    clean();
    title();
    cout << "1. Add new teacher" <<endl ;
    cout << "2. View all teacher" << endl ;
    cout << "3. Delete a teacher " << endl<<endl;

    cout << "0.  For back" << endl ;

}
void get_student_option()
{
    clean();
    title();
    cout << "1. Add new student" <<endl ;
    cout << "2. View all student" << endl ;
    cout << "3. Delete a student " << endl<<endl;

    cout << "0.  For back" << endl ;

}
void get_course_optin()
{
    clean();
    title();
    cout << "1. Add new course" <<endl ;
    cout << "2. View all course" << endl ;
    cout << "3. Delete a course " << endl <<endl;

    cout << "0.  For back" << endl ;

}

int execute_op(int x)
{
    switch(x)
    {
    case 1 :

        get_teacher_option();

        cin >> decision;
        switch(decision)
        {
        case 1 :
            clean();
            cout << "Enter Teacher name" << endl;
            if (decision== 1 )
            {


                cout << "Enter Teacher name " << endl;
                cin >> names ;
                cout << "Enter Department Name" <<endl;
                cin >> depts ;
                cout << "Enter Salary" <<endl ;
                cin >> salaries ;
                teacher teach(names ,  depts,salaries);

            }
            break;
        case 2:
            clean();
            cout << "it's two";
            break;
        }
        break;
    case 2:
        get_student_option();
        break ;
    case 3:
        get_course_optin();
        break;
    case 8:
        exit(1);
        break;
    default:
        cout << "404 ! not found ! Please try again" << endl ;

    }
}
#endif // MISC_H_INCLUDED
