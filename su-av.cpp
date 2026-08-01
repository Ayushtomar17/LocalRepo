#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    int sum,n;
    cout<<"enter the value of n:"<<" ";
    cin>>n;
    cout<<"enter the values:"<<" ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;          //cant use vec[i] to take input bcz iniially vec is empty
        vec.push_back(x);
    }
    for(auto it=vec.begin();it!=vec.end();it++){
        sum=sum+*(it);
    }
    cout<<"sum is: "<<sum<<endl;
   float avg=sum/n;
   cout<<"avg is: "<<avg<<endl;
   return 0;

}