#include<iostream>
using namespace std;

int main(){
    int marks[] = {45,54,58,65};
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // cout<<"These are mathmarks"<<endl;
    // int mathmarks[4];
    // mathmarks[0] =544;
    // mathmarks[1] =654;
    // mathmarks[2] =789;
    // mathmarks[3] =456;
    // cout<<mathmarks[0]<<endl;
    // cout<<mathmarks[1]<<endl;
    // cout<<mathmarks[2]<<endl;
    // cout<<mathmarks[3]<<endl;


    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of "<<i<<" is "<<marks[i]<<"."<<endl;
    // }
    
    // int j = 0;
    // while (j<4)
    // {
    //     cout<<"The value of "<<j<<" is "<<marks[j]<<"."<<endl;
    //     j++;
    // }
    // j = 0;
    // do {
    //     cout<<"The value of "<<j<<" is "<<marks[j]<<"."<<endl;
    //     j++;
    // }while(j<4);

    int* p =  marks;
    cout<<"The value of *p is "<<*p<<endl;
    cout<<"The value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"The value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"The value of *(p+3) is "<<*(p+3)<<endl;

    return 0;
}