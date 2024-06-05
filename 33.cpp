#include <iostream>
using namespace std;

class Bankdeposit
{
    int principal, years;
    float interestrate, returnvalue;

public:
    Bankdeposit(){};
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void show();
};
Bankdeposit ::Bankdeposit(int p, int y, float r)
{
    principal = p;
    years = y;
    interestrate = r;

    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}
Bankdeposit ::Bankdeposit(int p, int y, int r)
{
    principal = p;
    years = y;
    interestrate = float(r) / 100;

    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void Bankdeposit ::show()
{
    cout << "Principal amount was " << principal << endl
         << "Return value after " << years
         << " is " << returnvalue << endl;
}
int main()
{
    Bankdeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;
    cout << "Enter the value of principal, years and interestrate" << endl;
    cin >> p >> y >> r;
    bd1 = Bankdeposit(p, y, r);
    bd1.show();
    cout << "Enter the value of principal, years and interestrate" << endl;
    cin >> p >> y >> R;
    bd2 = Bankdeposit(p, y, R);
    bd2.show();
    return 0;
}