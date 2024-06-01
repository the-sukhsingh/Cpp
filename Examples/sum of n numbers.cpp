#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the limit\n";
    cin>>n;
    int summ = 0;
    for (int i = 0; i < (n+1); i++)
    {
        summ += i;
    }
    cout<<"The sum of first "<<n<<" natural numbers is: "<<summ;
    return 0;
}