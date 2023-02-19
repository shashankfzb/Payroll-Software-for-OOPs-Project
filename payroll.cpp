  #include<iostream>
#include<string>
#include<windows.h>
using namespace std;
class Employee{
    public:
    string arr[10][9],b;
    int a=0;
    void new_emp(){
        system("cls");
        for(int i=a;i<(a+1);i++){
            for(int z=0;z<9;z++){
                cout<<"\nenter employee code: ";
                cin>>b;arr[i][z]=b;++z;
                cout<<"\nEnter name of the employee: ";
                cin>>b;arr[i][z]=b;++z;
                cout<<"\nEnter Address of the employee: ";
                cin>>b;arr[i][z]=b;++z;
                cout<<"\nEnter phone_no of the employee: ";
                cin>>b;arr[i][z]=b;++z;
                cout<<"\nEnter joining date of the employee: ";
                cin>>b;arr[i][z]=b;++z;
                cout<<"\nEnter grade of the employee: ";
                cin>>b;arr[i][z]=b;++z;
                cout<<"\nEnter basic pay of the employee: ";
                cin>>b;arr[i][z]=b;++z;
                cout<<"\nEnter load(y/n) of the employee: ";
                cin>>b;arr[i][z]=b;++z;
                cout<<"\nEnter designation of the employee: ";
                cin>>b;arr[i][z]=b;++z;
                
            }
            
        }
        ++a;

    }
    void display_emp(){
            system("cls");
            for(int i=0;i<a;i++){
                for(int z=0;z<9;z++){
                cout<<"\n-------------------------------------------\n";
                cout<<"\nemployee code:                  ";
                cout<<arr[i][z];++z;
                cout<<"\nname of the employee:           ";
                cout<<arr[i][z];++z;
                cout<<"\nAddress of the employee:        ";
                cout<<arr[i][z];++z;
                cout<<"\nphone_no of the employee:       ";
                cout<<arr[i][z];++z;
                cout<<"\njoining date of the employee:   ";
                cout<<arr[i][z];++z;
                cout<<"\ngrade of the employee:          ";
                cout<<arr[i][z];++z;
                cout<<"\nbasic pay of the employee:      ";
                cout<<arr[i][z];++z;
                cout<<"\nload(y/n) of the employee:      ";
                cout<<arr[i][z];++z;
                cout<<"\ndesignation of the employee:    ";
                cout<<arr[i][z];++z;
                cout<<"\n-------------------------------------------\n";
            }

        }
        if((a-1)<0){
            cout<<"\n*********************************\n";
            cout<<"Employee list is empty\n";
            cout<<"**********************************\n";
        }

    }

    void loe(){
        system("cls");
        cout<<"----------------------------------------\n";
        cout<<"\tTotal Number of employees in the company are: "<<a;
        cout<<"\n----------------------------------------\n";
    }
    void salary_slip(){
        system("cls");
        int d,m,y;
        string x;
        cout<<"\nenter employee code:";
        cin>>x;
        date:
        cout<<"enter Today's Date\ndate :";
        cin>>d;if(d>31){cout<<"\n--\ninvalid date\n--\n";goto date;}
        month:
        cout<<"\nMonth:";
        cin>>m;if(m>12 || m<0){cout<<"\n--\ninvalid Month\n--\n";goto month;}
        year:
        cout<<"\nYear:";
        cin>>y;if(y<1900 || y>3000){cout<<"\n--\ninvalid year\n--\n";goto year;}
        for(int i=0;i<(a+1);i++){
            if(arr[i][0]==x){
                cout<<"\nemployee is found\n";
                cout<<"\n************************************************\n";
                cout<<"\n\t\tSALARY SLIP\n";
                cout<<"\n**************************************************\n";
                
                cout<<"\nDate :                  ";
                cout<<d<<"-"<<m<<"-"<<y<<endl;
                cout<<"\nName:                   ";
                cout<<arr[i][1];
                cout<<"\nDesignation:            ";
                cout<<arr[i][8];
                cout<<"\nGrade:                  ";
                cout<<arr[i][5];
                cout<<"\nDate of Joining:        ";
                cout<<arr[i][4];
                cout<<"\nBasic Pay:              ";
                cout<<arr[i][6];
                cout<<"\n**************************************************\nRemarks: Good and Hard Working\n";
                cout<<"\n**************************************************\n";

            }
            else{
                continue;
            }
        }

    }
    void delete_record(){
        system("cls");
        
        string ecode;
        cout<<"\nEnter employee code to delete :";
        cin>>ecode;
        for(int i=0;i<a;i++){

            if(arr[i][0]==ecode){

                cout<<"\nrecord found...\n";
                cout<<"deleting record...\n";

                a=a-1;
                for(int j=i;j<(a+1);j++){
                    for(int z=0;z<9;z++){
                        arr[j][z]=arr[j+1][z];
                    } 
                }
                cout<<"\nRecord Deleted successfully....\n";
                
            }
            else{
                cout<<"Record not found:\n";
            }
        }
    }  
    void modify_record(){
        system("cls");
        string h;
        int ch;
        cout<<"\nEnter employee code to modify:  ";
        cin>>h;
        for(int c=0;c<a;c++){
            if(arr[c][0]==h){
                cout<<"\nEmployee found\n";
                cout<<"Choice Record to modify\n1.Name\n2.Add\n3.Phone Number\n4.Joining Date\n5.Designation\n6.Grade\n7.Basic Pay\n8.Loan\nchoice: ";
                cin>>ch;
                if(ch==1){
                    cout<<"\nenter name: ";
                    cin>>arr[c][1];
                    cout<<"\nRecord Modified:-)\n";
                }
                else if(ch==2){
                    cout<<"\nenter address: ";
                    cin>>arr[c][2];
                    cout<<"\nRecord Modified:-)\n";
                }
                else if(ch==3){
                    cout<<"\nenter Phone: ";
                    cin>>arr[c][3];
                    cout<<"\nRecord Modified:-)\n";
                }
                else if(ch==4){
                    cout<<"\nenter Date Of Joining: ";
                    cin>>arr[c][4];
                    cout<<"\nRecord Modified:-)\n";
                }
                else if(ch==5){
                    cout<<"\nenter Designation: ";
                    cin>>arr[c][8];
                    cout<<"\nRecord Modified:-)\n";
                }
                else if(ch==6){
                    cout<<"\nenter Grade: ";
                    cin>>arr[c][5];
                    cout<<"\nRecord Modified:-)\n";
                }
                else if(ch==7){
                    cout<<"\nenter Basic Pay: ";
                    cin>>arr[c][6];
                    cout<<"\nRecord Modified:-)\n";

                }
                else if(ch==8){
                    cout<<"\nenter Loan: ";
                    cin>>arr[c][7];
                    cout<<"\nRecord Modified:-)\n";
                }
            }
        }
        
    }
    

};

class editmenu:public Employee{
    public:
    int choice;
    void menu(){
        system("cls");
        cout<<"\n***************************************\nwelcome to Edit Menu\n***************************************\n";
        cout<<"\n\t1.Delete\n\t2.Modify Record\n\t3.Exit\n\n\tchoice: ";
        cin>>choice;
    
        if(choice==1){
            system("cls");
            delete_record();
        }  
        else if(choice==2){
            system("cls");
            modify_record();
        }
        else if(choice==3){
            system("cls");
            exit(0);
            //break;
        }    
    }
    
};



class signin{
    public:
    string user,password;
    signin(){
        cout<<"\n\n\t\t******************************************\n\t\tCreate your account  ";
        cout<<"\n\t\t******************************************\n\t\tusername : ";
        cin>>user;
        cout<<"\t\tPassword : ";
        cin>>password;
        cout<<"\n\t\t******************************************\n\t\tCreating your account";
        for(int i=0;i<7;i++){
            cout<<".";
            Sleep(500);
        }
        Sleep(1000);
    }
    bool login(){
        system("cls");
        string U,pass;
        start:
        cout<<"\n\n\t\t******************************************\n\t\tlog into your account  ";
        cout<<"\n\t\t******************************************\n\t\tusername : ";
        cin>>U;
        cout<<"\t\tPassword : ";
        cin>>pass;
        if(U==user && pass==password){
            cout<<"\n\t\t******************************************\n\t\tlogin successfully\n";
            Sleep(1000);
            return true;
        }
        else{
            system("cls");
            cout<<"\n\t\t******************************************\n\t\tInvalid User name and password\n";
            cout<<"\n\t\t******************************************\n\t\tRetry :-) ";
            goto start;
        }
    }       

};



class Interface:public editmenu,public signin{

    public:
    int x;
    void execute(){
    system("cls");
    while(true){
    cout<<"___________________________________________"<<endl;
    cout<<"\n\t   Edushark Pvt ltd."<<endl;
    cout<<"___________________________________________\n";
    cout<<"\n\t1.New Employee.\n\t2.Display Employee.\n\t3.List Of Employees.\n\t4.Salary Slip.\n\t5.Edit\n\t6.Quit\t\n";
    cout<<"___________________________________________\n";
    cout<<"\n\tEnter your choice:--  ";
    cin>>x;
    if(x==1){
        system("cls");
        new_emp();
    }
    else if(x==2){
        
        display_emp();
    }
    else if(x==3){
        system("cls");
        loe();
    }
    else if(x==4){
        system("cls");
        salary_slip();
    }
    else if(x==5){
        system("cls");
        menu();
    }
    else if(x==6){
        exit(0);
        break;
    }
    
    
    }
    
    // switch(x){
    //     case 1:
    //         Employee e;
    //         e.new_emp();
    //         break;
    //     case 2:
    //         Employee e;
    //         e.display_emp();
    // }

    
    }
};

int main(){
    Interface i;
    //i.login();
    if(i.login()==true){
        i.execute();
    }
    return 0;
}