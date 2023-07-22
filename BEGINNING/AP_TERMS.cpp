#include<iostream>
using namespace std;
 int main()
 {
    int n,x,term;
    cout<<"enter the no.of terms"<<endl;
    cin>>x;
    n=1;
    int count=0;
    while(count<=x)
    {
         term=3*n+2;
          if(term%4 != 0)
            {
                cout<<term<<endl;
                count++;
            }
            else{

            };
            n=n+1;
    }





 }