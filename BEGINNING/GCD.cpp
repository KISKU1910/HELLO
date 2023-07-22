#include<iostream>
using namespace std;
 int main ()
 {
    int a,b,small,gcd=1;
    cout<<"enter the two numbers"<<endl;
    cin>>a>>b;
     if(a>b)
     { small=a;}
     else {small=b;}

       for(int i=1;i<=small;i++)
          {  if (a%i==0 && b%i==0)
              { gcd=i;
              }

          }
      cout<<"the gcd of two numbers is \t"<<gcd;


 }