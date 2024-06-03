#include<iostream>
using namespace std;

class Simple{
    int data1, data2;
    public:
        Simple(int a, int b = 9){
            data1 = a;
            data2 = b;
        }
        void printdata();
};

void Simple ::printdata(){
    cout<<"The data is "<<data1<<" and "<<data2<<endl;
}

int main(){
    Simple s(4,2), t(8);
    s.printdata();
    t.printdata();
    return 0;
}