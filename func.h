#ifndef FUNC_H_INCLUDED
#define FUNC_H_INCLUDED
// added classes.h for all property for a project ..
#include "classes.h"
string temp ;
void go_back();
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

    cout << "1. Departments" <<endl ;
    cout << "2. Teachers" <<endl;
    cout << "3. Students" <<endl<<endl;
    cout << "4. Change Login PIN" << endl << endl ;
}
void show_dept_options()
{

    cout << "1. Add New Department" <<endl ;
    cout << "2. View All Dept" <<endl;
    cout << "3. Search Department" << endl;
    go_back();



}
void show_teacher_options()
{

    cout << "1. Add New Teacher" <<endl ;
    cout << "2. View All Teacher list" <<endl;
    cout << "3. Search Teacher by ID" << endl;
    go_back();


}
void show_student_options()
{

    cout << "1. Add New Student" <<endl ;
    cout << "2. View All Student list" <<endl;
    cout << "3. Search Student by ID" << endl;
    go_back();

}

int login(string pin)
{
    string pass ;
    fstream log("./db/users.txt") ;
    log >> pass ;
    if (pin == pass)
    {
        return 4 ;
    }
}

void change_pin()
{
    fstream log("./db/users.txt");
    cout << "Please Enter new PIN : ";
    cin >> temp ;
    log << temp ;
    cout << "PIN has been changed ! " << endl << endl ;

}
void go_back()
{
    cout << endl << "5. Back" << endl;
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
