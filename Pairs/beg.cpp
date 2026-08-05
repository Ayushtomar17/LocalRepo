#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main(){
  vector<int>v={1,3,6,4,1,4};

  map<int,int> m;
  //count frequency:
  for(int i=0;i<v.size();i++){
    m[v[i]]++;
  }
  for(auto p:m)
  cout<<p.first<<" "<<p.second<<endl;
    return 0;
} 