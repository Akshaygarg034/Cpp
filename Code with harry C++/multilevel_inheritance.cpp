#include<iostream>
using namespace std;

class rollno{
protected : int roll_no;
public:
void setRollNo(int r){
roll_no = r;
};
};

class exam :public rollno{
protected: 
float physics;
float chemistry;
float maths;
public:
void setMarks(float f, float c, float m){
    physics = f;
    chemistry = c;
    maths = m;
}
};

class result :public exam{
protected:
float percentage;
public:
void displayResult(){
    cout<<"Your marks in physics are "<<physics<<endl;
    cout<<"Your marks in chemistry are "<<chemistry<<endl;
    cout<<"Your marks in maths are "<<maths<<endl;
    cout<<"Your final percentage is "<<(physics+chemistry+maths)/3<<"%"<<endl;
}
};
int main(){
    result akshay;
    akshay.setRollNo(59);
    akshay.setMarks(98,97,99);
    akshay.displayResult();
    return 0;
}