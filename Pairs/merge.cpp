#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]= {21,3,43,52};
    int a[]= {4,2,1,67};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        v.push_back({arr[i],a[i]});
    }
    for(auto p:v)
    cout<<p.first<<" "<<p.second<<endl;
    return 0;

}