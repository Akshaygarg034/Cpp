#include <iostream>
using namespace std;
template <class T>
class myclass
{
public:
    T data;
    myclass(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void myclass<T>::display()
{
    cout << "The value of data is " << data << endl;
}

int main()
{
    myclass<int> obj(5);
    obj.display();
    return 0;
}