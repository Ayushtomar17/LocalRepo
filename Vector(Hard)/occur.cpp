#include<iostream>
#include<vector>
using namespace std;
int main(){
    int x;
    vector<int>v={10,20,10,20,40,10,50};
    cout<<"enter the x value: ";
    cin>>x;
    for(int i=0;i<v.size();i++){
        if(x==v[i]){
            v.erase(v.begin()+i);
            i--;                   //if values are {10,10,20}
        }
    }
    cout<<"new array:"<<" ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}