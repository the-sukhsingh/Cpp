#include<iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void printnum(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

Complex :: Complex(int x,int y)
{
    a = x;
    b = y;
}

int main(){
    Complex a(4,9);
    Complex b = Complex(7,9);
    a.printnum();
    b.printnum();
    return 0;
}