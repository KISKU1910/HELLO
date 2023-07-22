#include<iostream>
using namespace std;
int main()
{
    int n1, n2, n3, n;
    cout<<"enter the no. of terms"<<endl;
    cin>>n;
    n1=0;
         n2=1;
         cout<<n1<<" "<< n2;
    
    for(int i=2;i<n;i++)
    {    
         
        n3=n1+n2;
        n1=n2;
        n2=n3;
        
        cout<< " "<<n2;
        
    }
}