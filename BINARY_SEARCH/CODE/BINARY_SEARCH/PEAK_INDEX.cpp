#include<bits/stdc++.h>
using namespace std;
int peakindex(int arr[], int size){
    int start=0;
    int end=size-1;

    int mid;
    while(start<=end){
        mid=(start+end) >> 1;
     if((mid==0 || arr[mid-1] <= arr[mid]) && (mid == size-1 || arr[mid+1] <= arr[mid]))
         break;

        if(mid > 0 && arr[mid-1]>arr[mid]){
            end=mid -1;
        }
        else{
            start=mid+1;
        }
       // mid=start+(end-start)/2;
    }
    return mid;

}
int main(){
    int arr[7]={ 10, 5, 15, 2, 23, 97, 30};
    //sort(arr1,arr1+7);
    cout<<"the peak of the mountain is"<<peakindex(arr,7)<<endl;
}