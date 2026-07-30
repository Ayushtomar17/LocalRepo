#include<iostream>
using namespace std;
template<class T>
T maxv(T a,T b){
    if(a>b){
        return a;
    }
    else {
        return b;
    }
}
int main(){
  cout<<"for integer: " <<maxv(67,54)<<endl;
  cout<<"for float: "<<maxv(5.5,7.5)<<endl;
  cout<<"for character: "<<maxv('A','X')<<endl;
  return 0;
}