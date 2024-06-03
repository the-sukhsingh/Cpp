#include <iostream>
#include <string>
using namespace std;

class Binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void Binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void Binary :: ones_complement(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0'){
            s.at(i) = '1';
        }
        else{
            s.at(i) = '0';
        }
    }
    
}

void Binary :: display(void){
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main()
{
    Binary b;
    b.read();
    b.chk_bin();
    b.display();
    cout<<endl;
    b.ones_complement();
    b.display();
    return 0;
}