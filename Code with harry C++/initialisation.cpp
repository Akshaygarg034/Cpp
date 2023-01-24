#include <iostream>
using namespace std;

class List
{
    int val1;
    int val2;

public:
    List(int a, int b) : val1(val2+b), val2(a)
    {
        cout << "value of val1 is " << val1<<endl;
        cout << "value of val2 is " << val2<<endl;
    }
};

int main()
{
    List akshay(5,6);
    return 0;
}