#include<iostream>
using namespace std;

class Bank{
    int balance = 0;
    public:
        void chkbalance(void){
            cout<<"Your account has "<<balance<<" rupee."<<endl;
        }
        void add_money(void){
            int money;
            cout<<"Enter the money you want to credit in your account";
            cin>>money;
            balance = balance + money;
            cout<<"Your money is credited in your account."<<endl;
        }
        void withdraw_money(void){
            int money;
            cout<<"Enter the amount of money to debit";
            cin>>money;
            balance -= money;
            cout<<"Your money is debited from your account."<<endl;
        }
};


int main(){
    Bank sukh;
    sukh.add_money();
    sukh.chkbalance();
    sukh.withdraw_money();
    sukh.chkbalance();
    sukh.add_money();
    sukh.chkbalance();
    return 0;
}