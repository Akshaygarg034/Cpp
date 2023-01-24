#include<iostream>
using namespace std;

class student{
protected:
int roll_no;
public:
void set_rollno(int r){
    roll_no = r;
}
};

class academic :virtual public student{
protected:
int physics, maths;
public:
void set_marks(int m1, int m2){
    physics = m1;
    maths = m2;
}
};

class sports :virtual public student{
protected:
int scores;
public:
void set_score(int s){
    scores = s;
}
};
class result :public academic, public sports{
int total;
public:
void display()
{
    total = maths + physics + scores;
    cout<<"Your Rollno. is "<<roll_no<<endl;
    cout<<"Your Marks are: "<<endl
        <<"Maths - "<<maths<<endl
        <<"Physics - "<<physics<<endl;
        cout<<"Your scores in PT are "<<scores<<endl;
        cout<<"Your Total Becomes "<<total<<endl;
}
};
int main(){
    result akshay;
    akshay.set_rollno(59);
    akshay.set_marks(99, 97);
    akshay.set_score(20);
    akshay.display();
    return 0;
}