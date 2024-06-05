#include<iostream>
using namespace std;

class Student{
    protected:
        int rollno;
    public:
        void setrollno(int);
        void getrollno(void);

};


void Student :: setrollno(int r){
    rollno = r;
}

void Student :: getrollno(){
    cout<<"The roll no of the student is "<<rollno<<endl;
}

class Exam : public Student{
    protected:
        float maths,physics;
    public:
        void setmarks(float, float);
        void getmarks(void);
};

void Exam :: setmarks(float m1, float m2){
    maths = m1;
    physics = m2;
}

void Exam :: getmarks(){
    cout<<"The marks obtained in physics are "<<physics<<endl;
    cout<<"The marks obtained in maths are "<<maths<<endl;
}

class Result : public Exam{
    float percentage;
    public:
        void display(){
            getrollno();
            cout<<"Your percentage is "<<(maths + physics)/2<<endl;
        }
};

int main(){
    Result sukh;
    sukh.setrollno(452);
    sukh.setmarks(80.0,90.0);
    sukh.display();
    return 0;
}