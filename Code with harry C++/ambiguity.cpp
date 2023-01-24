#include<iostream>
using namespace std;

class base1{
public:
void say(){
    cout<<"Hello"<<endl;
}
};
class base2{
public:
void say(){
    cout<<"Whatsup"<<endl;
}
};

class derived : public base1, public base2{
    public:
// void say(){
//     base1::say();
// }
void say(){
    cout<<"Hello World"<<endl;
}
};

int main(){
    derived obj;
    obj.say();
    return 0;
}