#include <iostream>
using namespace std;
int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "Constructor is called for object " << count << endl;
    }
    ~num()
    {
        cout << "Destructor is called for object " << count << endl;
        count--;
    }
};

int main()
{
    cout<<"Welcome to main function:)"<<endl;
    num o1;
    {
        cout<<"Entering the block!!!!!!!!!!!!!"<<endl;
        num o2, o3;
        cout<<"Exiting the block!!!!!!!!!!!!!"<<endl;
    }
    cout<<"Leaving Main function:)"<<endl;
    return 0;
}