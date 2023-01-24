#include<iostream>
using namespace std;

class complex{
int a,b;
public:
complex(){
    a=5;
    b=10;
}
void display(){
    cout<<"Your complex no. is "<<a<<" + "<<b<<" i "<<endl;
}
};

int main(){
    complex num;
    num.display();
    return 0;
}