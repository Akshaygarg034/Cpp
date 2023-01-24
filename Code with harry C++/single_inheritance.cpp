#include<iostream>
using namespace std;

class base{
    int data1;
    public:
    int data2;
    void setData();
     int getData1();
};

void base::setData(){
data1 = 10;
data2 = 5;
}

int base::getData1(){
    return data1;
}
class derived : public base{
int data3;
public:
void setData3(){
    data3 = data2*getData1();
}
void display(){
    cout<<"The value of data 1 is "<<getData1()<<endl;
    cout<<"The value of data 2 is "<<data2<<endl;
    cout<<"The value of data 3 is "<<data3<<endl;
}
};

int main(){
    derived der;
    der.setData();
    der.setData3();
    der.display();
    return 0;
}