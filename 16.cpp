#include<iostream>
using namespace std;


// This will not swap values as it will get copy of values not the actual variables
void swap(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

// This will swap values as it will get address of values and it will swap them
void pointerswap(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swapref(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 5,b = 7;
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;
    pointerswap(&a,&b);
    cout<<"The value of a is "<<a<<" and the value of b is "<<b<<endl;

    int x = 78,y = 45;
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapref(x,y);
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    return 0;
}