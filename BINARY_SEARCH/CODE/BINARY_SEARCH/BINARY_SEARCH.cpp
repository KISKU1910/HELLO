#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
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

int main(){
    int evenarr[6]={2, 4, 6, 8, 10, 12};
    int oddarr[5]={1, 3, 5, 7, 9};
    int evenindex= binarysearch(evenarr,6,20);
    cout<<evenindex<<endl;
    int oddindex=binarysearch(oddarr,5,1);
    cout<<oddindex<<endl;
}