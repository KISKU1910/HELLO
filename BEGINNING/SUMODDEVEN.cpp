#include<iostream>
using namespace std;
 int main()
 {
    int n,num;
    int evensum=0,oddsum=0;
    cout<<"enter the number" << endl;
    cin>> n;
    while(n>1)
    {
       num=n%10;
       n=n/10;
        if (num%2==0)
           { 
              evensum=evensum+num;
           }
         else { oddsum=oddsum+num;
                  }
    }
    cout<<evensum<<"(evensum) \t"<<oddsum <<"(oddsum)";
     

 }