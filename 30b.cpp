#include<iostream>
using namespace std;

class Point{
    int x,y;
    public:
        Point(int a,int b){
            x = a;
            y = b;
        }
        void displaypoint(){
            cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
        }
};

int main(){
    Point p(1,1);
    p.displaypoint();
    Point q(5,5);
    q.displaypoint();
    return 0;
}