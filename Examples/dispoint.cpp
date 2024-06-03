#include<iostream>
#include<math.h>
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
        friend void dist(Point,Point);
};
float square(float a){
    return a*a;
}
float squareroot(float a){
    return pow(a,0.5);
}
void dist(Point o1,Point o2){
    double dista;
    dista =  sqrt(square(o1.x - o2.x) + square(o1.y - o2.y));
    cout<<"The distance between given points is "<<dista<<endl;
}

int main(){
    Point p(1,1);
    p.displaypoint();
    Point q(5,5);
    q.displaypoint();
    dist(q,p);
    return 0;
}