//Medium level:
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
        cin>>x;         //cant use vec[i] to take input bcz iniially vec is empty
        vec.push_back(x);
    }
    cout<<"\n using index:\n";
     for(int i=0;i<n;i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n using Range-based for loop:\n";
    for(int val:vec){
        cout<<val<<" ";
    }
     cout<<"\n using iterator:\n";
     vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<< *(it)<<" ";
    }
    return 0;
}