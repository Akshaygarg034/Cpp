#include <iostream>
using namespace std;

class shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The id of this item is " << id << endl;
        cout << "The price of this item is " << price << endl;
    }
};

int main()
{
    int p;
    float q;
    shop *ptr = new shop[3];
    shop* ptrTemp = ptr;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "For item no. "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}