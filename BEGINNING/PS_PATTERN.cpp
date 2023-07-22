#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
    
    int i=5;
    while(i>=1)
    {     int j=1;
        int k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k=k+1;
        }
       
        while(j<=i)
        {
            if(j%2==0)
            {
                cout<<"0";
            }
            else{
                cout<<"1";
            }
                
        
                
                   j=j+1;

        }
        cout<<endl;
        i=i-1;
    }
}
