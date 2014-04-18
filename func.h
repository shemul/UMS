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
void show_main_options()
{
    cout << "1. Departments" <<endl ;
    cout << "2. Teachers" <<endl;
    cout << "3. Students" <<endl<<endl;
}
void dept_options()
{
    cout << "1. View Department List"<< endl ;
    cout << "2. Back to main menu"<< endl ;
}


#endif // FUNC_H_INCLUDED
