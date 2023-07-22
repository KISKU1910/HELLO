#include<iostream>
using namespace std;
void revarr(int arr[] , int size){
    
        int start=0;
        int end=size-1;
       while(start<=end){
           swap(arr[start],arr[end]);
           start++;
           end--;
       }   
} 

void printarr(int arr[] , int size) {
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";

    }
}


int main(){
    
    int arr[5]={1, 4, 5, 7, 8, };
    cout<< "the original array is"<<" "<< "1, 4, 5, 7, 8"<<endl;
     revarr(arr,5);
     printarr(arr,5);


}