#include "classes.h"
#include "func.h"
int main()
{
    int choice ;


    show_main_options();

    cin >> choice ;
    switch(choice)
    {
        case 1 :
            clear();
            show_dept_options();
            break;
        case 2 :
            clear();
            show_teacher_options();
            break;
        case 3:
            clear();
            show_student_options();
            break ;
        default:
            clear();
            show_header();
            cout << "Oops ! 404" << endl ;

    }

}
