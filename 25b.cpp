#include<iostream>
using namespace std;

class Complex{
    int a;
    int b;
    public:
        void getnum(int v1,int v2){
            a = v1;
            b = v2;
        }
        void getnumbysum(Complex o1,Complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }
        void printnum(void){
            cout<<"The number is "<<a<<"+"<<b<<"i"<<endl;
        }
};

int main(){
    Complex c1,c2,c3;
    c1.getnum(4,5);
    c1.printnum();
    c2.getnum(1,3);
    c2.printnum();
    c3.getnumbysum(c1,c2);
    c3.printnum();
    return 0;
}