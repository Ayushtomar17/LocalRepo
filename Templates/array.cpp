#include<iostream>
using namespace std;
template<class T>
class Array{
    private:
    T n;
    T arr[];
    public:
    void input(){
    cout<<"enter the number of elements you want"<<":";
    cin>>n;
    cout<<"enter the values:"<<":";
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    }
    void display(){
        cout<<"the numbers are:"<<":";
        for(int i=0;i<n;i++){
      cout<<arr[i]<<endl;
    }
    }
    void large(){
       int larg = arr[0];
       for(int i=1;i<n;i++){
        if(larg<arr[i]){
            larg=arr[i];
        }}
        cout<<"largest value is: "<<larg<<endl;
    }
    void smal(){
       int small = arr[0];
       for(int i=1;i<n;i++){
        if(small>arr[i]){
            small=arr[i];
        }}
        cout<<"smallest value is: "<<small<<endl;
    }    
};
int main(){
    Array<int> ar;
    ar.input();
    ar.display();
    ar.large();
    ar.smal();
    return 0;
}