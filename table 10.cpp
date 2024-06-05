#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int i = 1;

    cout<<"Table of 6 with do-while"<<endl;
    do{
        cout<<"6 * "<<i<< " = "<<setw(3)<<6*i<<endl;
        i++;
    }while(i<=10);
    cout<<"Table of 6 with while"<<endl;
    i = 1;
    while (i<=10)
    {
        cout<<"6 * "<<i<< " = "<<setw(3)<<6*i<<endl;
        i++;
    }
    // i = 1;
    cout<<"Table of 6 with for loop"<<endl;
    for (int i = 1; i < 11; i++)
    {
        cout<<"6 * "<<i<< " = "<<setw(3)<<6*i<<endl;
    }
    
    

    return 0;
}