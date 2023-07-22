#include<iostream>
using namespace std;
int main()
{
    int a,b,pow=1;
    cout<<"enter the number and power"<<endl;
     cin>>a>>b;
     if(b==0)
     {
         pow=1;
     }
     else {
         for(int i=1;i<=b;i++)
         { 
             pow=pow*a ;
         }
     }
     cout<< "a^b="<<pow;
}