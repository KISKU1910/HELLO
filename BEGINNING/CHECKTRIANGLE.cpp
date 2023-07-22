#include<iostream>
 using namespace std;
 int main()
 { 
     float a,b,c;
     cout<<"enter the first side of triangle"<< endl;
     cin>>a;
     cout<<"enter the second side of triangle"<<endl;
     cin>>b;
     cout<<"enter the third side of triangle"<<endl;
     cin>>c;

     if(a==b && b==c && a==c )
       { cout<< "1"<< endl;
          }
          else if (a==b || b==c || a==c)
         { cout<< "0"<<endl;}
          else {cout<<"-1"<<endl;
                }

 }
