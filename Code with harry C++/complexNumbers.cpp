#include <iostream>
using namespace std;

class complex
{
    int a, b;

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
    void GetNoBySum(complex o1, complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};

int main()
{
complex c1, c2, c3;
c1.setvalues(3,4);
c1.getno();

c2.setvalues(4,5);
c2.getno();

c3.GetNoBySum(c1,c2);
c3.getno();

    return 0;
}