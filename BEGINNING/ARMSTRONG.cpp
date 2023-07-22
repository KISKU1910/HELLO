#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,r,temp,num=0;
    char ch;
    cout<<"enter the number"<<endl;
    cin>>n;
    temp=n;
   int count=0;
    while(n!=0)
     {
         n=n/10;
         count++;
     }
     while(n>=1)
    {
        r=n%10;
        num=num+(pow(r,count));
        n=n/10;
    }
    if(num==temp)
    {
        cout<<"it is a armstrong number"<<endl;
    }
    else{
        cout<<"it is not a armstrong number";
    }
   
   

}