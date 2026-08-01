#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>vec;
    int count=0;
    int coun=0;
    int n;
    cout<<"enter the value of n:"<<" ";
    cin>>n;
    cout<<"enter the values:"<<" ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;          //cant use vec[i] to take input bcz iniially vec is empty
        vec.push_back(x);
    }
    for(auto it=vec.begin();it!=vec.end();it++){
        if(*(it)%2==0){
            count++;
        }
        else{
            coun++;
        }
    }
        cout<<"even: "<<count<<endl;
        cout<<"odd: "<<coun<<endl;

    return 0;
}