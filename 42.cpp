// Calculator

#include <iostream>
using namespace std;

class Calc
{
protected:
    float get_numbers(void);
    void runCalc(void);

};
float Calc ::get_numbers(void)
{
    float a;
    float b;
    char c;
    cout << "Enter the first number, operator and second number" << endl;
    cin >> a>>c>>b;
    switch (c)
    {
    case '+':
        return a + b;
        break;

    case '-':
        return a - b;
        break;

    case '*':
        return a * b;
        break;

    case '/':
        return a / b;
        break;

    default:
        cout << "Enter the values corrctly" << endl;
        break;
    }
}

void Calc ::runCalc()
{
    cout << "The result of the given inputs is " << get_numbers() << endl;
}

class Scintific{
    protected:
        int power(int, int);
        float mod(float);
        int factorial(int);
        float inverse(float);
        void runsci(void);
};

int Scintific :: power(int a, int b){
    if (b == 1){
        return a;
    }
    else{
        return a * power(a,b-1);
    }
}

float Scintific :: mod(float a){
    if (a >= 0){
        return a;
    }
    else{
        return -a;
    }
}

int Scintific :: factorial(int a){
    if ((a == 0) || (a == 1)){
        return 1;
    }
    else{
        return a * factorial(a-1);
    }
}

float Scintific :: inverse(float a) {
    return 1/a;
}

void Scintific :: runsci(void){
    cout<<"Which scientific calculation you want to do?"<<endl
    <<"1. Power (a raise to the power b)"<<endl
    <<"2. Modulus"<<endl
    <<"3. Factorial"<<endl
    <<"4. Inverse (1/x)"<<endl;
    int inp;
    cin>>inp;
    switch (inp)
    {
    case 1:
        cout<<"Enter a and b "<<endl;
        int a,b;
        cin>>a>>b;
        cout<<a<<" raise to the power "<<b<<" is "<<power(a,b)<<endl;
        break;
    case 2:
        cout<<"Enter the value"<<endl;
        int modd;
        cin>>modd;
        cout<<"Modulus value of "<<modd<<" is "<<mod(modd)<<endl;
        break;
    case 3:
        cout<<"Enter the number to find the factorial of :"<<endl;
        int fact;
        cin>>fact;
        cout<<"The factorial of "<<fact<<" is "<<factorial(fact)<<endl;
        break;
    case 4:
        cout<<"Enter the number to find the inverse of "<<endl;
        int inv;
        cin>>inv;
        cout<<"The inverse of the "<<inv<< " is "<<inverse(inv)<<endl;
        break;
    default:
        break;
    }
}

class Fullcalc : public Calc, public Scintific{
    int chk;
    int chek(){
        cout<<"What do you want to do..?"<<endl
        <<"1. Simple Calculation.."<<endl
        <<"2. Scientific Calculation.."<<endl;
        cin>>chk;
        return chk;
    }
    public:
    void runcal(){
        int checked = chek();
        if (checked == 1){
            runCalc();
        }
        else{
            runsci();
        }
    }
};

int main()
{
    Fullcalc o1;
    while (true)
    {
        o1.runcal();
    }


    return 0;
}