#include<iostream>
using namespace std;
bool linearsearch(int *arr, int s, int k){
    if(s==0){
        return false;
    }
    if (arr[0]==k){
        return true;
    }
    else{
        bool ans=linearsearch(arr+1, s-1, k);
        return ans;
    }


}
int main(){
    int arr[]={2,4, 67, 58, 3, 5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int k;
    cout<<size<<endl;
    cout<<"enter the number to be searched"<<endl;
    cin>>k;
    int ans=linearsearch(arr,size,k);
    if (ans){
        cout<<"it is present"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
}