#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    // if (age<18){
    //     cout<<"You are a kid.";
    // }
    // else if(age == 18){
    //     cout<<"You are a growing kid.";
    // }
    // else{
    //     cout<<"You are a man.";
    // }

    switch (age)
    {
    case 18:
        cout<<"Growing";
        break;
    case 2:
        cout<<"Born";
        break;
    case 75:
        cout<<"Old";
        break;
    
    default:
        cout<<"Chal oye";
        break;
    }

    return 0;
}