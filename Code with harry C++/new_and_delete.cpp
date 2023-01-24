#include<iostream>
using namespace std;

int main(){
 int *point = new int(4);
 cout<<*point<<endl;

int* pointer = new int[4];
pointer[0] = 5;
cout<<*pointer;

    return 0;
}