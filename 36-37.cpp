#include<iostream>
using namespace std;

class Employee{
    public:
        int id;
        float salary;
        Employee(){};
        Employee(int inpId){
            cout<<"emp"<<endl;
            id = inpId;
            salary = 150;
        }
};

class Programmer : Employee{
    public:
        int languagecode = 5;
        Programmer(int inpId){
            cout<<"prgrmr"<<endl;
            id = inpId;
        }
        void getdata(void){
            cout<<id<<endl;
        }
};

int main(){
    Employee sukh(1);
    cout<<sukh.salary<<endl;
    Programmer keshav(4);    
    // keshav.salary;
    cout<<keshav.languagecode<<endl;
    keshav.getdata();
    return 0;
}