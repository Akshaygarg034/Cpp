#include <iostream>
using namespace std;

class complex;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(complex o1, complex o2);
    int sumImaginaryComplex(complex o1, complex o2);
};

class complex
{
    int a, b;
    // friend int calculator::sumRealComplex(complex o1, complex o2);
    // friend int calculator::sumImaginaryComplex(complex o1, complex o2);
    friend class calculator;

public:
    void setvalues(int x, int y)
    {
        a = x;
        b = y;
    }
    void getno()
    {
        cout << "The complex no. is " << a << "+i" << b << endl;
    }
};
int calculator::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::sumImaginaryComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setvalues(3, 4);
    o2.setvalues(5, 6);
    calculator sum;
    int final1 = sum.sumRealComplex(o1, o2);
    int final2 = sum.sumImaginaryComplex(o1, o2);
    cout << "The sum of real part of both complex numbers is " << final1<<endl;
    cout << "The sum of Imaginary part of both complex numbers is " << final2<<endl;
    return 0;
}