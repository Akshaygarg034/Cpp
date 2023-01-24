#include<iostream>
using namespace std;

class base1{
protected :
int val1;
public:
void setValue1(int a){
val1 = a;
}
};

class base2{
protected :
int val2;
public:
void setValue2(int b){
val2 = b;
}
};

class derived :public base1, public base2{
public:
void show(){
    cout<<"The value of val1 and val2 is "<<val1<<" and "<<val2<<" respectively"<<endl;
}
};

int main(){
    derived obj;
    obj.setValue1(40);
    obj.setValue2(60);
    obj.show();
    return 0;
}