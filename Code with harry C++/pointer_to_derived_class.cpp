#include <iostream>
using namespace std;

class Base
{
public:
    int var_base;
    void display()
    {
        cout << "The value of var_base is " << var_base << endl;
    }
};

class Derived : public Base
{
public:
    int var_derived;
    void display()
    {
        cout << "The value of var_derived is " << var_derived << endl;
    }
};

int main()
{
    Base obj_base;
    Base *ptr_base;
    Derived obj_derived;

    ptr_base = &obj_derived;
    ptr_base->var_base = 5;
    ptr_base->display();

    Derived *ptr_derived;
    ptr_derived = &obj_derived;
    ptr_derived->var_derived = 10;
    ptr_derived->display();
    return 0;
}