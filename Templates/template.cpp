#include<iostream>
using namespace std;
template<class T>

    void swap(T a,T b){
        T temp=a;
        a=b;
        b=temp;
        cout<<"values after swapping is a , b: "<<a<<","<<b<<endl;
    }

int main(){
    cout<<"original values are a = 2 and b = 5"<<endl;
    swap(2,5);
    return 0;
}


