#include <iostream>
using namespace std;

class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);    
};

class Y{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
    friend void add(X, Y);    

};

void add(X o1, Y o2){
    cout<<"Summing data of X and Y objects gives me "<< o1.data + o2.data;
}


int main(){
    X a1;
    a1.setValue(35);

    Y b1;
    b1.setValue(45);

    add(a1, b1);
    return 0;
}
