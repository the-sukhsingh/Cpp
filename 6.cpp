#include<iostream>

using namespace std;

int main(){
    cout<<"Operators in C++"<<endl;
    cout<<"Arithematic operators"<<endl;
    int a=5,b=6;
    // cout<<"Enter value of a"<<endl;
    // cin>>a;
    // cout<<"Enter value of b"<<endl;
    // cin>>b;

    cout<<"The value of a + b is "<<a + b<<endl;
    cout<<"The value of a - b is "<<a - b<<endl;
    cout<<"The value of a * b is "<<a * b<<endl;
    cout<<"The value of a / b is "<<a / b<<endl;
    cout<<"The value of a % b is "<<a % b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"Assignment Operators"<<endl;
    int d = 4,ss = 5;
    char sss = 'd';

    cout<<"Comparison operators"<<endl;
    cout<<"The value of a == b is "<<(a==b)<<endl;
    cout<<"The value of a != b is "<<(a!=b)<<endl;
    cout<<"The value of a > b is "<<(a>b)<<endl;
    cout<<"The value of a < b is "<<(a<b)<<endl;
    cout<<"The value of a >= b is "<<(a>=b)<<endl;
    cout<<"The value of a <= b is "<<(a<=b)<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;


    cout<<"Logical Operators"<<endl;
    cout<<"The value of this logical and ((a==b) && (a>b)) logical operator is "<<((a==b) && (a>b))<<endl;
    cout<<"The value of this logical or ((a==b) || (a>b)) logical operator is "<<((a==b) || (a>b))<<endl;
    cout<<"The value of this logical not (!(a==b)) logical operator is "<<(!(a==b))<<endl;
    return 0;
}