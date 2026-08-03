#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,0,2,0,5,3};
    int j=0;
    int x;
    cout<<"enter value you want to shift to last:"<<" ";
    cin>>x;
    for(int i=0;i<v.size();i++){
        if (v[i]!=x)
        {
            swap(v[i],v[j]);
            j++;
        }
    }
    cout<<"new vector: ";
    for(int y:v){
        cout<<y<<" ";
    }
    return 0;   
}