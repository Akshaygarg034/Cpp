#include <iostream>
using namespace std;

class employee
{
    int id;
    string name;

public:
    void setdata(void)
    {
        cout << "Enter the name of this employee" << endl;
        cin >> name;
        cout << "Enter the id of this employee" << endl;
        cin>>id;
    }
    void getdata(void)
    {
        cout << "The name of this employee is " << name << endl;
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    employee ids[100];
    for (int i = 0; i < 4; i++)
    {
     ids[i].setdata();     
     ids[i].getdata();     

    }
    
    return 0;
}