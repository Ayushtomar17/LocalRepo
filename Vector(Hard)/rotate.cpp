#include<iostream>
#include<vector>
using namespace std;
void shiftL(vector<int>& v){
    int temp=v[0];
    for (int i=0;i<v.size()-1;i++){
        v[i]=v[i+1];
    }
    v[v.size()-1]=temp;   
}
void shiftR(vector<int>& v){
    int temp=v[v.size()-1];
    for (int i=v.size()-1;i>0;i--){
        v[i]=v[i-1];
    }
    v[0]=temp;
}
void shiftk(vector<int>& v,int k){ 
    while(k--){
        int temp=v[0];
    for (int i=0;i<v.size()-1;i++){
        v[i]=v[i+1];
    }   
        v[v.size()-1]=temp;
    }
}

int main(){
    int x;
    vector<int>v={2,3,4,5,6};
    shiftk(v,2);
    for(int x:v)
    {
        cout<<x<<" ";
    }
    return 0;
}