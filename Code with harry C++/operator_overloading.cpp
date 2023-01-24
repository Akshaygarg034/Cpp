#include <iostream>
using namespace std;

class complex
{
    int real, imag;

public:
    complex()
    {
        real = 0;
        imag = 0;
    }
    complex(int a, int b)
    {
        real = a;
        imag = b;
    }
    void display()
    {
        cout << "The complex no. is " << real<<" + "<<imag<<" i"<< endl;
    }

    complex operator +(complex c)
    {
        complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main()
{
complex c1(3,4);
complex c2(5,6);
complex c3(6,7);
complex c4;
c4 = c1+c2+c3;
c4.display();
    return 0;
}