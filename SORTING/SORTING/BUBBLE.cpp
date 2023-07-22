#include<bits/stdc++.h>
using namespace std;
void bubble(int arr[], int n){
  int i,j;
  for(i=0; i<n-1; i++){
    for(j=0; j<n-i-1; j++){
        if(arr[j] > arr[j+1])
        swap(arr[j+1],arr[j]);
    }
  }
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
int main(){
    int arr[]={64,7,2,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubble(arr,n);
     printArray(arr,n);
}