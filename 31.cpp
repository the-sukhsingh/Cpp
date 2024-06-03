#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    void printnum()
    {
        cout << "Your number is " << a << " + " << b << "i." << endl;
    }
};

int main()
{
    Complex c1(4, 8), c2(2), c3;
    c1.printnum();
    c2.printnum();
    c3.printnum();
    return 0;
}