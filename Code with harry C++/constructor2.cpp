#include <iostream>
#include <cmath>

using namespace std;

class point
{
    int x, y;
    friend void distance(point, point);

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
};
void distance(point o1, point o2)
{
    cout << "The distance between both points is " << sqrt((o2.x - o1.x) * (o2.x - o1.x) + (o2.y - o1.y) * (o2.y - o1.y)) << endl;
}

int main()
{
    point p1(1, 0), p2(9, 0);
    distance(p1, p2);
    return 0;
}