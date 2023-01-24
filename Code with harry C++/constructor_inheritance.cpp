#include<iostream>
using namespace std;

class base1{
int val1;
public:
base1(int a){
    val1 = a;
    cout<<"Base 1 Constructor has been called!!!!!!"<<endl;
}
void display_base1(){
    cout<<"The value of val1 is: "<<val1<<endl;
}
};

class base2{
int val2;
public:
base2(int b){
    val2 = b;
    cout<<"Base 2 Constructor has been called!!!!!!"<<endl;
}
void display_base2(){
    cout<<"The value of val2 is: "<<val2<<endl;
}
};

class derived : public base1, public base2{
    int val3;
public:
derived(int a, int b , int c): base1(a), base2(b){
val3 = c;
 cout<<"Derived Constructor has been called!!!!!!"<<endl;
}
void display_derived(){
    cout<<"The value of val3 is: "<<val3;
}
};
int main(){
    derived akshay(1,2,3);
akshay.display_base1();
akshay.display_base2();
akshay.display_derived();
    return 0;
}