#include<iostream>
#include<string.h>
using namespace std;
struct emp
{
    char id[5];
    char emp_name[20];
    char emp_qualification[20];
    float experience;
    char contact[20];
    void getdata()
    {
        int len;
        cout<<"Enter an Employee id : "<<endl;
        cin>>id;
        len=strlen(id);
        if(len==4)
        {
            cout<<"---------------------------------------"<<endl;
            fflush(stdin);
            cout<<"Employee Name : "<<endl;
            fflush(stdin);
            cin>>emp_name;
            cout<<"Qualifiaction : "<<endl;
            fflush(stdin);
            cin>>emp_qualification;
            cout<<"Experience : "<<endl;
            fflush(stdin);
            cin>>experience;
            cout<<"Contact Number : "<<endl;
            fflush(stdin);
            cin>>contact;
            cout<<"----------------------------------------"<<endl;
        }
        else
        {
            cout<<"****************************************"<<endl;
            cout<<"ERROR :ENTERED EMPLOYEEID DOES NOT EXIST"<<endl;
            cout<<"****************************************"<<endl;
        }
    }
};
int main()
{
    int ch;
    struct emp e;
    again:
    e.getdata();
    cout<<"press Y to get employee detail,Press N to exit : "<<endl;
    cin>>ch;
    if(ch=='Y' && ch=='y')
    {
        goto again;
    }
    else
    {
        exit(0);
    }
    return 0;
}