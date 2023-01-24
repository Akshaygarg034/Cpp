#include <iostream>
using namespace std;

class complex
{
    int a;

public:
    complex() {}
    complex(int x)
    {
        a = x;
    }

    //copy constructor
    complex(complex &obj)
    {
        a = obj.a;
    }

    void display()
    {
        cout << "The no. is " << a << endl;
    }
};

int main()
{
    complex c1(5);
    complex c2(c1);
    /*
Or it can be written as
complex c2 = c1;
   */
    c2.display();
    return 0;
}