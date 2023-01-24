#include <iostream>
using namespace std;

void check(int a, int b, int c)
{
    if (a + b + c == 180 && a, b, c > 0)
    {
        cout << "Yes the can make a Triangle and ";
        if (a == b && b == c)
        {
            cout << "the Triangle is Equilateral";
        }
        else if (a == b || b == c || c == a)
        {
            cout << "the Triangle is isoceless" << endl;
        }
        else if (a == 90 || b == 90 || c == 90)
        {
            cout << "the triangle is Right Angled";
        }
        else
        {
            cout << "the triangle is Scalen";
        }
    }
    else
    {
        cout << "They cannot form a Triangle" << endl;
    }
}

int main()
{
    int a, b, c;
    cout << "Enter three angles:" << endl;
    cin >> a >> b >> c;
    check(a, b, c);
    return 0;
}