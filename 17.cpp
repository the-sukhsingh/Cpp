#include <iostream>
using namespace std;

inline int pro(int a, int b)
{
    static int c = 0;
    c = c + 2;
    return (a * b) + c;
}

float moneyrec(int money , float factor = 1.05){
    return money * factor;
}

int main()
{
    // int a, b;
    // cout << "Enter the value of a and b" << endl;
    // cin >> a >> b;
    // cout << "The product of a and b is " << pro(a, b) << endl;
    // cout << "The product of a and b is " << pro(a, b) << endl;
    // cout << "The product of a and b is " << pro(a, b) << endl;
    int money = 100000;
    cout<<"If you invest "<<money<<" in our scheme today  you will get "<<moneyrec(money)<<" after 1 year.";
    cout<<"For VIP If you invest "<<money<<" in our scheme today  you will get "<<moneyrec(money,1.1)<<" after 1 year.";

    return 0;
}