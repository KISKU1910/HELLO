#include<iostream>
using namespace std;
void selection(int arr[] , int n){
   for(int i=0; i<n; i++){
    int minindex=i;
    for(int j=i+1; j<n; j++)
        if(arr[j]<arr[minindex])
        minindex=j;
    swap(arr[minindex],arr[i]);
   }
   
   
}
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        cout << arr[i] << " "; 
    cout << endl; 
} 
int main(){
    int arr[]={4,6,3,2,0};
    int n=sizeof(arr)/sizeof(arr[0]);
     selection(arr,n);
     printArray(arr,n);
     


}