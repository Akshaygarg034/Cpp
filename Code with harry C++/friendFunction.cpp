#include <iostream>
using namespace std;

class employee
{
    int a, b;
    friend employee GetNoBySum(employee o1, employee o2);

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
employee GetNoBySum(employee o1, employee o2)
{
    employee o3;
    o3.setvalues((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    employee c1, c2, c3;
    c1.setvalues(3, 4);
    c1.getno();

    c2.setvalues(4, 5);
    c2.getno();

    c3 = GetNoBySum(c1, c2);
    c3.getno();
    return 0;
}