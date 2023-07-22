#include<iostream>
using namespace std;
int sqrrootint(int n){
    int start=0;
    int end=n;
   long long int  mid=start+(end-start)/2;
   long long int ans= -1;

   while(start<=end){
     long long int  square=mid*mid;
     if(square==n){
        return mid;
     }
     if(square<n){
        ans=mid;
        start=mid+1;
     }
     else{
        end=mid-1;
     }
     mid=start+(end-start)/2;

   }
   return ans;

}

 double moreprecision(int n, int precision, int ans){
    double factor=1;
    double sol=ans;

    for(int i=0; i<precision; i++){

       factor=factor/10;

    for(double j=sol; j*j<n; j+=factor ){
      sol=j;
    }
    
    }
    return sol;
 }
int main(){
    int n;
    cout<<"enter the number"<<endl;
    cin>>n;
    int ans=sqrrootint(n);
    
    cout<< "the answer is" <<" "<< moreprecision(n,5,ans);


}