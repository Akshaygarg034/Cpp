#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<string, int> mapMarks;

    mapMarks["anmol"] = 30;
    mapMarks["akshay"] = 50;
    mapMarks["rohan"] = 10;
    mapMarks.insert({{"ramesh", 60}, {"rahul", 90}});

    map<string, int>::iterator iter;
    for (iter = mapMarks.begin(); iter != mapMarks.end(); iter++)
    {
        cout << "THe marks of " << (*iter).first << " is " << (*iter).second << endl;
    }
    cout << mapMarks.max_size();
    return 0;
}