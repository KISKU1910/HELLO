#include<iostream>
using namespace std;
int reachhome(int src, int dest){
    cout<< "source" << src << "destination"<< dest << endl;
    if(src==dest){
        cout<<"reached"<<endl;
        return 0;
    }

    src++;
    reachhome(src,dest);

}
int main(){
    int src=1, dest;
    cin>>dest;

    reachhome(src,dest);

}