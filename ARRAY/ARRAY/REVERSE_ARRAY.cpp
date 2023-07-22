#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int>v){
    int s=0;
    int e=v.size()-1;
    while(s<=e){
        swap(v[s], v[e]);
        s++;
        e--;
    }
    return v;
    


}
void printarray(vector<int>v){
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
int main(){
    vector<int>v;
    v.push_back(22);
    v.push_back(2);
    v.push_back(12);
    v.push_back(7);
    v.push_back(9);

    vector<int> ans =reverse(v);
    printarray(ans);
   
}