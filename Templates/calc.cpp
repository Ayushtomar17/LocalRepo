#include<iostream>
using namespace std;
template<class T>
    class Cal{
    private:
       T num1;
       T num2;
    public:
        void add(T num1 , T num2)
        {
            T sum = num1+num2;
            cout<<"sum: "<<sum<<endl;
        }
        void sub(T num1 , T num2)
        {
            T sub = num1-num2;
            cout<<"sub: "<<sub<<endl;
        }
         void mul(T num1 , T num2)
        {
            T mul = num1*num2;
            cout<<"mul: "<<mul<<endl;
        }
         void div(T num1 , T num2)
        {
            if(num2==0){
                cout<<"cannot divide by 0"<<endl;
            }
            else{
            T div = num1/num2;
            cout<<"div: "<<div<<endl;
        }
    }
    };
int main(){
    Cal<int> c;
    c.add(4,5);
    c.div(5,0);
    Cal<float>c2;
    c2.sub(66.5,34.5);
    c2.mul(5.5,4.5);
}
