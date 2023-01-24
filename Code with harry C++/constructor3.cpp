#include<iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(){
        a = 0;
        b = 0;
    }
    complex(int x, int y){
        a = x;
        b = y;
    }
    complex(int x){
        a = x;
        b = 0;
    }

    void display()
    {
        cout << "The complex no. is " << a << "+i" << b << endl;
    }
};

int main(){
    complex c1(3,4);
    complex c2(5);
    complex c3;
    c1.display();
    c2.display();
    c3.display();
    return 0;
}