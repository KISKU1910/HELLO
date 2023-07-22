#include<iostream>
using namespace std;
int binarysearch(int arr[], int s, int e, int key){
    int start=0;
    int end=e;
 int mid=start+(end-start)/2;

     while(start<=end){
       if(arr[mid]==key){
        return mid;
       }        
       if(key>arr[mid]){
        start=mid+1;
       }
       else{
        end=end-1;
       }
       mid=start+(end-start)/2;

    }
    return -1;

}

int getpivot(int arr[], int size){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;

    while(start<end){
        if(arr[mid]>=arr[0]){
        start=mid+1;}
        else
             {end=mid;}
             mid=start+(end-start)/2;

    }
    return start;

}
int pivotedbinarysearch(int arr[], int size, int k){
    int pivot=getpivot(arr,size);
    if(k>=arr[pivot] && k<=arr[size-1])
    {
        return binarysearch( arr, pivot, size-1,  k);
    }
    else{
        return binarysearch(arr,0,pivot-1,k);
    }

}
int main(){
    int arr[5]={5, 7, 1, 3,4};
    
    cout<<"the index of the element is"<<" "<<pivotedbinarysearch(arr,5,7);

}