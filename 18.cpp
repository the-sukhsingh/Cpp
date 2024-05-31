#include<iostream>
using namespace std;

int facto(int a)
{
    if (a <= 1){
        return 1;
    }
    else{
        return a * facto(a-1);
    }
}

int fibbo(int n)
{
    if (n <= 1){
        return 1;
    }
    else{
        return (fibbo(n-1) + fibbo(n-2));
    }
    
}

int main(){
    int x = 5;
    // cout<<facto(x);
    cout<<fibbo(x);
    return 0;
}