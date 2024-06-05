#include <iostream>
using namespace std;

class Base1
{
protected:
    int baseint1;

public:
    void setbaseint1(int a)
    {
        baseint1 = a;
    }
};
class Base2
{
protected:
    int baseint2;

public:
    void setbaseint2(int a)
    {
        baseint2 = a;
    }
};

class Derived : public Base1, public Base2
{
public:
    void show()
    {
        cout << "The value of base 1 int is " << baseint1 << endl
             << "The value of base 2 int is " << baseint2 << endl
             << "The sum of these two integers is " << baseint1 + baseint2 << endl;
    }
};

int main()
{
    Derived sukh;
    sukh.setbaseint1(45);
    sukh.setbaseint2(25);
    sukh.show();
    return 0;
}