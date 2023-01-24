#include<iostream>
using namespace std;

template<class T1, class T2>
void swap(T1 &a, T2 &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 5,b = 3;
  swap(a,b);
  cout<<a<<endl<<b;
    return 0;
}