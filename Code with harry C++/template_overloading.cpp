#include<iostream>
using namespace std;

// Exact matching takes higher priority
void display(int a){
    cout<<"I am first function whose value is "<<a<<endl;
}
template <class T>
void display(T a){
    cout<<"I am template function whose value is "<<a<<endl;
}

int main(){
    display(4);
    display('c');
    return 0;
}