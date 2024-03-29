#include<iostream>
using namespace std;

int firstocc(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=end-1;
        }
        else if(key>arr[mid]){
               start=start+1;
        }
        else if(key<arr[mid]){
            end=end-1;
        }
        mid=start+(end-start)/2;

    }
    return ans;
   
}

int lastocc(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
               start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        mid=start+(end-start)/2;

    }
    return ans;
   
}

int main(){
    int arr[8]={1,2,3,3,3,3,3,4};

    cout<<"first occurence of 3 is at index"<<firstocc(arr,8,3)<<endl;
    cout<<"last occurence of 3 is at index"<<lastocc(arr,8,3)<<endl;

}