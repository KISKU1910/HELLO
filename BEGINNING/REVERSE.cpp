#include<iostream>
#include<conio.h>
using namespace std;
int main()
{   
    int n,r,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    
    while(n>=1)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;

    }
    cout<<rev;

}