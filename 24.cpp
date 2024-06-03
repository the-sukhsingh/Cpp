#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the id" << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id is " << id << " and this employee is " << count << endl;
    }
    static void getcount(void){
        cout<<"The value of count is "<<count<<endl;
    }
};

int Employee ::count;

int main()
{
    Employee sukh, keshav, anshu;
    sukh.setData();
    sukh.getData();
    Employee::getcount();
    keshav.setData();
    keshav.getData();
    Employee::getcount();
    anshu.setData();
    anshu.getData();
    Employee::getcount();
    return 0;
}