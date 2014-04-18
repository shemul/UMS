#include "classes.h"
#include "func.h"
int main()
{
    int choice ;

    string str1,str2,str3,str4 ;
    int int1 , int2 , int3,int4 ;


    show_main_options();

    cin >> choice ;
    switch(choice)
    {
        case 1 :
            clear();
            show_dept_options();
            cin >> choice ;
            switch(choice)
            {
                //add
                case 1:
                    clear();
                    cout << "Enter Department ID" <<endl;
                    cin >> int1 ;
                    cout << "Enter Department Name" << endl;
                    cin >> str1;
                    if (choice == 1)
                    {
                        dept dept_ob ;
                        dept_ob.set_dept_id(int1);
                        dept_ob.set_dept_name(str1);

                        fstream dept_db("./db/dept.txt" ,fstream::in | fstream::out | fstream::app );
                        if (!dept_db)
                        {
                            cout << "Failed to create db" <<endl;
                        }
                        dept_db << int1 <<"\t" << str1<<endl;
                        cout << "Thank you " << endl;
                        system("PAUSE");

                    }
                    break;
                case 2:
                    clear();
                    if(choice == 2)
                    {
                        fstream dept_db("./db/dept.txt");
                        cout << "DeptID" << "\t" << "DeptName"<<endl;
                        cout <<"----------------" <<endl;
                        while (getline(dept_db,str1))
                        {
                            cout << str1 <<endl;
                        }

                    }
                    break;
                default:
                    cout <<"Oops 404 !" <<endl;
                    system("PAUSE");
            }
            break;
        case 2 :
            clear();
            show_teacher_options();
            cin >> choice;
            switch(choice)
            {
                case 1 :
                    //
                        clear();
                        cout << "Enter Department ID" <<endl;
                        cin >> int1 ;
                        cout << "Enter Department Name" << endl;
                        cin >> str1;
                        cout << "Enter Teacher ID" << endl ;
                        cin >> int2 ;
                        cout << "Enter Teacher Name" << endl;
                        cin >> str2 ;
                        cout << "Teacher's Course Name" << endl;
                        cin >> str3 ;
                        if (choice == 1)
                        {
                            teacher teacher_ob ;
                            teacher_ob.set_dept_id(int1);
                            teacher_ob.set_dept_name(str1);
                            teacher_ob.set_teacher_id(int2);
                            teacher_ob.set_teacher_name(str2);
                            teacher_ob.set_courses(str3);

                            fstream teacher_db("./db/teacher.txt" ,fstream::in | fstream::out | fstream::app );
                            if (!teacher_db)
                            {
                                cout << "Failed to create db" <<endl;
                            }
                            teacher_db << int1 <<"\t" << str1 <<"\t"<< int2 <<"\t"<< str2 <<"\t"<< str3 <<endl;
                            cout << "Thank you " << endl;
                        }
                    break;
                case 2:
                    //
                    clear();

                    if(choice == 2)
                    {
                        fstream teacher_db("./db/teacher.txt");
                        cout << "DptID " << "DptNam  " << "TeachID  "  << "TeachName  " << "Courses" <<endl;
                        cout <<"----------------------------------------------" <<endl;
                        while (getline(teacher_db,str1))
                        {
                            cout << str1 <<endl;
                        }

                    }
                    break;

            }
            break;
        case 3:
            clear();
            show_student_options();
            cin >> choice ;
            switch(choice)
            {
                case 1:
                        clear();
                        cout << "Enter Department ID" <<endl;
                        cin >> int1 ;
                        cout << "Enter Department Name" << endl;
                        cin >> str1;
                        cout << "Enter Teacher ID" << endl ;
                        cin >> int2 ;
                        cout << "Enter Teacher Name" << endl;
                        cin >> str2 ;
                        cout << "Enter Course Name" << endl;
                        cin >> str3 ;
                        cout << "Student ID" << endl;
                        cin >> int4 ;
                        cout <<"Enter Student Name" << endl;
                        cin >> str4;
                        if (choice == 1)
                        {
                            student student_ob ;
                            student_ob.set_dept_id(int1);
                            student_ob.set_dept_name(str1);
                            student_ob.set_teacher_id(int2);
                            student_ob.set_teacher_name(str2);
                            student_ob.set_courses(str3);
                            student_ob.set_student_id(int4);
                            student_ob.set_student_name(str4);
                            fstream student_db("./db/student.txt" ,fstream::in | fstream::out | fstream::app );
                            if (!student_db)
                            {
                                cout << "Failed to create db" <<endl;
                            }
                            student_db << int1 <<"\t" << str1 <<"\t"<< int2 <<"\t"<< str2 <<"\t"<< str3 << "\t" << int4 <<"\t" <<str4 <<endl;
                            cout << "Thank you " << endl;
                        }
                    break;
                case 2:
                    clear();

                    if(choice == 2)
                    {
                        fstream student_db("./db/student.txt");
                        cout << "DptID  " << "DptNam " << "TeachID "  << "TeachName " << "Courses  " <<"StudID  " << "StudName" <<endl;
                        cout <<"------------------------------------------------------" <<endl;
                        while (getline(student_db,str1))
                        {
                            cout << str1 <<endl;
                        }

                    }
                    break;
                default :
                    cout << "Oops 404!" << endl;
            }
            break ;

        default:
            clear();
            show_header();
            cout << "Oops ! 404" << endl ;

    }

}
