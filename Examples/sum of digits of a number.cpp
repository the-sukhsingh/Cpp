#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the digit\n";
    cin>>n;
    int temp = n;
    int summ = 0;
    while (temp>0)
    {
        summ = summ + (temp%10);
        temp = temp/10;
    }
    cout<<"The sum of digits of "<<n<<" is "<<summ;
    return 0;
}