#include <iostream>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumrealcomplex(Complex o1, Complex o2);
    int sumcompcomplex(Complex o1, Complex o2);
};

class Complex
{
    int a;
    int b;
    // friend int Calculator ::sumrealcomplex(Complex o1, Complex o2);
    // friend int Calculator ::sumcompcomplex(Complex o1, Complex o2);

    friend class Calculator;

public:
    void getnum(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printnum(void)
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumrealcomplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}
int Calculator ::sumcompcomplex(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}
int main()
{
    Complex o1, o2;
    o1.getnum(1, 4);
    o2.getnum(5, 7);
    Calculator calc;
    int res = calc.sumrealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;

    return 0;
}