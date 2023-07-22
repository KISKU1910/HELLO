#include<iostream>
using namespace std;
int main()
{
    int basic,total_salary;
    char grade;
    cout<<"enter the basic salary"<<endl;
    cin>>basic;
    cout<<"enter the grade"<<endl;
    cin>>grade;
    if(grade=='a')
      {
          total_salary=basic+(0.2*basic)+(0.5*basic)+(0.11*basic)+1700;
                }
                else if(grade=='b')
                {
                    total_salary=basic+(0.2*basic)+(0.5*basic)+(0.11*basic)+1500;
                }
                else if(grade=='c')
                {
                    total_salary=basic+(0.2*basic)+(0.5*basic)+(0.11*basic)+1300;
                }
                cout<<"the total salary is"<< " "<< total_salary<<endl;


}
