#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string content;
    string s;

    ofstream write("sample_write.txt");
    cout << "Enter the content you want to store in file" << endl;
    cin >> content;
    write << content;
    write.close();
    ofstream write2("sample_write.txt");
    write2 << "this is great" << endl;

    ifstream read("sample_read.txt");
    getline(read, s);
    cout << s;
    read.close();
    
    return 0;
}