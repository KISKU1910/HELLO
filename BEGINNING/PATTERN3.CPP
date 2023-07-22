#include<iostream>
using namespace std;
int main()
{        int n;
    cout<<"enter the number of rows"<<endl;
    cin>>n;
     int i=1;double val=1;
      while(i<=n)
       {
           int j=1;
           while(j<=i)
            {
                cout<<val;
                j=j+1;
                val=val+1;
                cout<<"\t";
            }
            cout<<endl;
            i=i+1;
       }
      
}