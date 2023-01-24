#include <iostream>
using namespace std;

class employee
{
    int id;

public:
    employee()
    {
        id = 5;
    }
    void show()
    {
        cout << "Your id is " << id<<endl;
    }
};

class programmer : public employee{
public:
int salary = 40;
};

int main()
{
programmer o1;
o1.show();
cout<<o1.salary;
    return 0;
}