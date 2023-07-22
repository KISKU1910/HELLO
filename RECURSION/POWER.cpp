#include<iostream>
using namespace std;
int power( int m ,int n){
     if(m==0)
   return 0;
    if(n==0 ) 
   return 1;
  
      
   

    return m * power(m,n-1);
}
int main(){
    int m, n;
    cout<<"enter the base"<<endl;
    cin>>m;
    cout<<"enter the power"<<endl;
    cin>>n;
    int ans = power(m,n);
    cout<< ans <<endl;
}