#include<iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X,Y);
};
class Y{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X,Y);
};

void add(X o1,Y o2){
    cout<<"Adding datas of X and Y objects gives me: "<<o1.data + o2.data;
}

int main(){
    X a;
    a.setValue(45);
    Y b;
    b.setValue(89);
    add(a,b);
    return 0;
}