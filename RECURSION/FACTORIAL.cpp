#include<iostream>
using namespace std;
int fact(int n){
    if(n==0)
    return 1;

    int small= fact(n-1);
    int bigger= n*small;
    return bigger;


}
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;
}