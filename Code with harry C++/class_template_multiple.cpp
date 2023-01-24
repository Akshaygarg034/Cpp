#include <iostream>
using namespace std;

template <class T1, class T2>
class myclass
{
public:
    T1 num;
    T2 letter;
    myclass(T1 a, T2 b)
    {
        num = a;
        letter = b;
    }
    void display()
    {
        cout << "The num is " << num << endl;
        cout << "The letter is " << letter << endl;
    }
};

int main()
{
 myclass<int, char> obj(7 ,'c');
 obj.display();
    return 0;
}