#include<iostream>
using namespace std;
bool binarysearch(int *arr, int s, int e, int key){
    if(s>e)
        return false;
    
    int mid= s+(e-s)/2;

    if(arr[mid]==key)
        return true;
    
    if(arr[mid]> key){
       return binarysearch(arr, s, mid-1, key);
    }
    if(arr[mid]<key){
        return binarysearch(arr, mid+1, e, key);
    }
}
int main(){
    int arr[]={0,3,7,9,45,69,78,88,99};
    int size = sizeof(arr)/sizeof(arr[0]);
    int key ;
    cin>>key;
   cout<<  binarysearch(arr, 0, size-1, key);
  
    


}