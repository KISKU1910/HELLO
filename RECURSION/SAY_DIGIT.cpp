#include<iostream>
using namespace std;
void saydigit(int n, string str[] ){
    if(n==0)
    return;

    int digit=n%10;
    n=n/10;

    saydigit(n,str);
    cout<<str[digit]<< " ";
}
int main(){
    string str[100]={ "zero","one", "two", "three","four","five", "six","seven", "eight","nine"};
  int n;
  cin>>n;

  saydigit(n, str);    
}