#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    int n;
    cout<<"enter the value of n:"<<" ";
    cin>>n;
    cout<<"enter the values:"<<" ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;          //cant use vec[i] to take input bcz iniially vec is empty
        vec.push_back(x);
    }
    vector<int>v;
    for(auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<" ";
    }
    return 0;

}