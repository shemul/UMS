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
    cout << "3. Search Department" << endl;

}
void show_teacher_options()
{

    cout << "1. Add New Teacher" <<endl ;
    cout << "2. View All Teacher list" <<endl;
    cout << "3. Search Teacher by ID" << endl;


}
void show_student_options()
{

    cout << "1. Add New Student" <<endl ;
    cout << "2. View All Student list" <<endl;
    cout << "3. Search Student by ID" << endl;

}

void searcher (int choice , string query)
{
    switch(choice)
    {
        case 1:
            //
            if (choice == 1 )
            {
                fstream finder("./db/dept.txt") , temp_ob("./db/dept.txt");
                string temp ;
                int count = 0;
                while (getline(temp_ob,temp))
                {
                    count++;
                }
               // cout << count ;
                string get_all[count];
                int i = 0 ;
                for(i = 0 ; i < count ; i++)
                {
                    getline(finder,get_all[i]);
                }

                for (i=0 ; i < count ; i++)
                {
                string::size_type pos = get_all[i].find(query);
                if(pos != string::npos)
                {
                    cout << endl << endl ;
                    cout << "DeptID" << "\t" << "DeptName"<<endl;
                    cout <<"----------------" <<endl;
                    cout << get_all[i] ;
                    cout << endl << endl ;

                }

                }
            }
            break ;
        case 2 :
            //
            if (choice == 2 )
            {
                fstream finder("./db/teacher.txt") , temp_ob("./db/teacher.txt");
                string temp ;
                int count = 0;
                while (getline(temp_ob,temp))
                {
                    count++;
                }
               // cout << count ;
                string get_all[count];
                int i = 0 ;
                for(i = 0 ; i < count ; i++)
                {
                    getline(finder,get_all[i]);
                }

                for (i=0 ; i < count ; i++)
                {
                string::size_type pos = get_all[i].find(query);
                if(pos != string::npos)
                {
                    cout << endl << endl ;
                    cout << "DptID " << "DptNam  " << "TeachID  "  << "TeachName  " << "Courses" <<endl;
                    cout <<"----------------------------------------------" <<endl;
                    cout << get_all[i] ;
                    cout << endl << endl ;
                }

                }
            }
            break;
        case 3 :
            if (choice == 3 )
            {
                fstream finder("./db/student.txt") , temp_ob("./db/student.txt");
                string temp ;
                int count = 0;
                while (getline(temp_ob,temp))
                {
                    count++;
                }
               // cout << count ;
                string get_all[count];
                int i = 0 ;
                for(i = 0 ; i < count ; i++)
                {
                    getline(finder,get_all[i]);
                }

                for (i=0 ; i < count ; i++)
                {
                string::size_type pos = get_all[i].find(query);
                if(pos != string::npos)
                {
                    cout << endl << endl ;
                    cout << "DptID  " << "DptNam " << "TeachID "  << "TeachName " << "Courses  " <<"StudID  " << "StudName" <<endl;
                    cout <<"------------------------------------------------------" <<endl;
                    cout << get_all[i] ;
                    cout << endl << endl ;
                }

                }
            }
            break ;
        default:
            cout << "Ooops ! 404 !" ;


    }
}


#endif // FUNC_H_INCLUDED
