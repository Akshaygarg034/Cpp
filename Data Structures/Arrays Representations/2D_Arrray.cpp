#include<iostream>
using namespace std;

int main(){
//Method 1: Static Method
    int a[3][4];

// Method 2: Pointers-static and arrays-dynamic
    int *p[3];
    p[0] = new int[4];
    p[1] = new int[4];
    p[2] = new int[4];

// Method 3: Both Pointers and Arrays are Dynamic, only Double Pointer is Static
    int ** d;
    d= new int*[3];
    d[0] = new int[4];
    d[1] = new int[4];
    d[2] = new int[4];

    cout<<"Enter elements in an Array:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>d[i][j];
        }
    }

    cout<<"Your Array is: "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    delete[] p;
    delete[] d;
    
    return 0;
}