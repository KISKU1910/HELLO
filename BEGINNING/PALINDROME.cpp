#include<iostream>
using namespace std;
int main()
{
    int n,temp,r,rev=0;
    cout<<"enter the number"<<endl;
    cin>>n;
    temp=n;
    while(n>=1)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(temp==rev)
    {
        cout<<"it is a palindrome number"<<endl;
    }
     else {
         cout<<"it is not a palindrome number";
     }
}