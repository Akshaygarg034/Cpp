#include <iostream>
using namespace std;
template <class T1 = int, class T2 = char>
class myclass
{
public:
    T1 num;
    T2 character;
    myclass(T1 a, T2 b)
    {
        num = a;
        character = b;
    }
    void display()
    {
        cout << "The value of num is " << num << endl;
        cout << "The value of char is " << character << endl;
    }
};

int main()
{
    myclass<> obj1(5, 'c');
    obj1.display();

    cout<<endl;

    myclass<char, float> obj2('a', 1.5);
    obj2.display();

    return 0;
}