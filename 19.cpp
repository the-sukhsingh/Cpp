#include<iostream>
using namespace std;

int sum(int a, int b){
    cout<<"Using function with 2 arguments"<<endl;
    return a + b;
}
int sum(int a, int b,int c){
    cout<<"Using function with 3 arguments"<<endl;
    return a + b + c;
}


int main(){
    int x = 5,y = 9,z = 34;
    cout<<"The sum of x and y is "<<sum(x,y)<<endl;
    cout<<"The sum of x,y and z is "<<sum(x,y,z)<<endl;
    return 0;
}