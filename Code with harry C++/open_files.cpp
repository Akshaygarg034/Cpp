#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string s;
    ifstream read;
    read.open("sample_read.txt");
    while(read.eof()==0){
        getline(read, s);
        cout<<s<<endl;
    }


    return 0;
}