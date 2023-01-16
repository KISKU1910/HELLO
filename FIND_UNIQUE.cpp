#include<iostream>
using namespace std;
int  findunique(int arr[], int size){
     int ans=0;
     for(int i=0; i<size;i++){
         ans=ans^arr[i];
     }
     return ans;
}
int main(){
    int arr[5]={1,4,5,1,4};
   int n= findunique(arr, 5);
  cout<<n<<endl;
}