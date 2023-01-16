#include<iostream>
using namespace std;

void printarr(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int arr[], int size ){
    for(int i=0; i<size; i+=2){
        if(i+1< size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arreven[6]={3,5,7,12,4,45};
    int arrodd[5]={23, 4, 6, 9, 34};


    cout<<"the even array elements are"<<"3, 5, 7, 12, 4, 45"<<endl;
    cout<<"the odd array elements are"<<"23, 4, 6, 9, 34"<< endl;
     
     swap(arreven, 6);
     printarr(arreven, 6);
      swap(arrodd, 5);
      printarr(arrodd,5);
}