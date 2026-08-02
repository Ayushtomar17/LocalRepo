#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {2,32,43,12,54};
    //second largest:
    int larg=0;
    int secondlargest;
    for(int i=1;i<v.size();i++){
        if(v[larg]<v[i]){
            secondlargest=larg;
            larg=i;
        }

    }

}