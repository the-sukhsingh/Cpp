#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} emp;

union money
{
    int rice;
    char car;
    float pounds;
};



int main(){
    // emp sukh;
    // emp keshav;
    // sukh.eId = 1;
    // sukh.favChar = 'S';
    // sukh.salary = 1554564586.15;
    // cout<<sukh.eId<<endl;
    // cout<<sukh.favChar<<endl;
    // cout<<sukh.salary<<endl;

    // union money m1;
    // m1.rice = 45;
    // m1.car = 'P';
    // cout<<m1.car;


    enum meal{breakfast,lunch,dinner};
    meal m1 = breakfast;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}