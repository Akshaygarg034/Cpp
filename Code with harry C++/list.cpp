#include <iostream>
#include <list>
using namespace std;

void display(list<int> l)
{
    list<int>::iterator iter;
    iter = l.begin();
    for (int i = 0; i < l.size(); i++)
    {
        cout << *iter << " ";
        iter++;
    }
    cout << endl;
}

int main()
{
    list<int> list1;
    list1.push_back(5);
    list1.push_back(4);
    list1.push_back(3);
    list1.push_back(2);
    list1.push_back(3);
    display(list1);

    // list1.remove(3);
    // list1.sort();
    // list1.pop_front();

    list<int> list2;
    list2.push_back(9);
    list2.push_back(15);
    list2.push_back(7);
    display(list2);
    
    // cout<<"After merging"<<endl;
    // list1.merge(list2);

    return 0;
}