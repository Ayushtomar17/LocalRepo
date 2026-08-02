#include<iostream>
#include<vector>
#include<climits>    //Provide min values and max value that built in variable can store.
using namespace std;
void second_largest(const vector<int>v){
    int largest=INT_MIN;
    int second=INT_MIN;
    for(int x:v){
        if(x>largest){
            second=largest;
            largest=x;
        }
        else if(x>second && x!=largest){
            second=x;
        }
    }
    if (second==INT_MIN){
        cout<<"-1";
    }
    else{
        cout <<"second largest:"<<second;
    }   
}
int main(){
    vector<int>v= {12,32,4,4,67};
    second_largest(v);
    return 0;
}