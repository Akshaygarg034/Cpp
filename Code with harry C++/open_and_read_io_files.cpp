#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string x;
    string y;

    ofstream write("sample_write.txt");
    write<<"good morning"<<endl;

    ifstream read("sample_read.txt");
    read>>x;
    getline(read, y);

    cout<<x<<endl;
    cout<<y<<endl;
    return 0;
}