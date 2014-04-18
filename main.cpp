#include "classes.h"
#include "func.h"
int main()
{
    int choice ;

    string str1,str2,str3 ;
    int int1 , int2 , int3 ;


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
                        dept_ob.show_dept_information();

                        ofstream dept_db("./db/dept.txt");
                        if (!dept_db)
                        {
                            cout << "Failed to create db" <<endl;
                        }
                        dept_db << int1 <<"\t" << str1;

                    }
                    break;
                case 2:
                    if(choice == 2)
                    {
                        ifstream dept_db("./db/dept.txt");
                        dept_db >> str1 ;
                        dept_db >> str2 ;
                        cout << "Dept ID" << "\t" << "Dept Name"<<endl;
                        cout <<"----------------" <<endl;
                        cout << str1 << "\t" << str2 ;
                    }

                    break;
                default:
                    cout <<"Oops 404 !" <<endl;
            }
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
