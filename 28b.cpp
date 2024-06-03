#include<iostream>
using namespace std;
class C2;
class C1{
    int val;
    public:
        void indata(int a){
            val = a;
        }
        void display(void){
            cout<<val<<endl;
        }
    friend void exchange(C1 &,C2 &);
};
class C2{
    int val2;
    public:
        void indata(int a){
            val2 = a;
        }
        void display(void){
            cout<<val2<<endl;
        }
    friend void exchange(C1 &,C2 &);
};
void exchange(C1 &x,C2 &y){
    int tmp = x.val;
    x.val = y.val2;
    y.val2 = tmp;
}

int main(){
    C1 o1;
    C2 o2;
    o1.indata(78);
    o2.indata(45);
    exchange(o1,o2);
    cout<<"The value after exchange is "<<endl;
    o1.display();
    cout<<"The value after exchange is "<<endl;
    o2.display();
    return 0;
}