#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v1={1,3,5,7};
    vector<int> v2={2,4,6,8};
    vector<int> mer;
    mer.insert(mer.end(),v1.begin(),v1.end());   
    mer.insert(mer.end(),v2.begin(),v2.end());
    sort(mer.begin(),mer.end());
    cout<<"Merged vector: ";
    for(int x:mer){
        cout<<x<<" ";
    }
    return 0;
}