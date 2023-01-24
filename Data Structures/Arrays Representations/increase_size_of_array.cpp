#include<iostream>
using namespace std;

int main(){
    int*p = new int[5];
    p[0]=1;  p[1]=3;  p[2]=4;  p[3]=2;  p[4]=6;

    // Increasing Its Size upto 10
    int *q = new int[10];
    for (int i = 0; i < 5; i++)
    {
        q[i]=p[i];
    }
    delete[] p;
    p = q;
    q = NULL;
    
    // Displaying Elemets Of Array
    for (int i = 0; i < 10; i++)
    {
        cout<<p[i]<<" ";
    }
    
    return 0;
}