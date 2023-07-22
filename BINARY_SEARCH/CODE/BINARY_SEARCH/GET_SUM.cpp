#include<iostream>
using namespace std;
int getsum(int *arr, int s){

    if(s==0){
        return 0;
    }
    if(s==1){
        return arr[0];
    }
    
        int temp = getsum(arr+1, s-1);
        int sum = arr[0] + temp;
        return sum;
    

}
int main(){
    int arr[]={2,4,1,7,6};
    int size = sizeof(arr)/sizeof(arr[0]);

    int sum = getsum(arr, size);

    cout<<sum<<endl;
}