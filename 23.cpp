#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrince[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
};

void Shop ::setprice(void)
{
    cout << "Enter Id of your item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrince[counter];
    counter++;
}

void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id " << itemId[i] << " is " << itemPrince[i] << endl;
    }
}

int main()
{
    Shop dukaan;
    dukaan.initCounter();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.setprice();
    dukaan.displayprice();
    return 0;
}