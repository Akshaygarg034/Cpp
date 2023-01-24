#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setId(void)
    {
        count++;
        cout << "Enter the Id of employee " << count << endl;
        cin >> id;
        cout << "The Id of employee " << count << " is " << id << endl;
    }
    static void displayCount(void)
    {
        cout << "the value of count is " << count << endl;
    }
};
int employee::count;

int main()
{
    employee rohan, mohan;
    rohan.setId();
    employee::displayCount();
    mohan.setId();
    employee::displayCount();
    return 0;
}