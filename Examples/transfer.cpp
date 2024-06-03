#include <iostream>
using namespace std;
class C2;
class C1
{
    int balance;

public:
    void getbalance(int a)
    {
        balance = a;
    }
    void display(void)
    {
        cout << balance << endl;
    }
    friend void transfer(C1 &, C2 &);
};
class C2
{
    int balance;

public:
    void getbalance(int a)
    {
        balance = a;
    }
    void display(void)
    {
        cout << balance << endl;
    }
    friend void transfer(C1 &, C2 &);
};
void transfer(C1 &x, C2 &y)
{
    int money = 100;
    x.balance = x.balance - money;
    y.balance = y.balance + money;
}
int main()
{
    C1 o1;
    o1.getbalance(450);
    C2 o2;
    o2.getbalance(850);
    cout<<"The balance in the accounts before transfer is "<<endl;
    o1.display();
    o2.display();
    transfer(o1,o2);
    cout<<"The balance in the accounts after transfer is "<<endl;
    o1.display();
    o2.display();
    return 0;
}