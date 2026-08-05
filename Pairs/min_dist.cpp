#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main(){
    int n,x,y;
    cout<<"enter the number of values you want to insert: ";
    cin>>n;
    vector<pair<int,int>> v;
    cout<<"enter the values of x and y: ";
    for(int i=0;i<n;i++){
        cin>>x>>y;
       v.push_back({x,y});
    }
    int minIndex = 0;
    double mindist = sqrt(v[0].first*v[0].first+v[0].second*v[0].second);
    for(int i=1;i<n;i++){
        double dist = sqrt(v[i].first*v[i].first+v[i].second*v[i].second);
            if(dist<mindist){
                minIndex=i;
                mindist=dist;
            }
    }
    cout<<"Point nearest to origin: ("<<v[minIndex].first<<","<<v[minIndex].second<<")\n";
    cout<<"Distance: "<<mindist;
    return 0;
}