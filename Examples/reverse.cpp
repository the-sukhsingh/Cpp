#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the digit\n";
    cin>>n;
    int rev = 0;
    for (; n>0; n = n/10)
    {
        rev = (rev *10) + (n%10);
    }
    cout<<"The reverse of the given number is "<<rev;
    
    return 0;
}