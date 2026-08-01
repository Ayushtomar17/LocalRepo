#include<iostream>
using namespace std;
template<class T, class S>
    class Student{
    private:
        T name;
        S roll;
    public:
    Student(T n, S m){
        name=n;
        roll=m;
       
    }
        void show(){
            cout<<"name : "<<name<<endl;
            cout<<"roll: "<<roll<<endl;
        }
    };
    int main(){
        Student<string,int> s("ayush",44);
        s.show();
        return 0;

    }
