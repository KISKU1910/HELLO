#include<bits/stdc++.h>
using namespace std;
int arrsum(int arr[], int s){
    if(s <= 0){
        return 0;
    }
    
   int m =arr[0] + arrsum(arr+1,s-1);
   return m;
}
int main(){
    int arr[4]={1,2,3,4};
    int ans = arrsum(arr,4);
    cout<<ans;
}
