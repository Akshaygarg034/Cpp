#include<iostream>
using namespace std;

class Data{
    int val1, val2;
    public:
void setData(int a, int b){
    val1 = a;
    val2 = b;
}
void getData(){
    cout<<"The value of val1 is "<<val1<<endl;
    cout<<"The value of val2 is "<<val2<<endl;
}
};

int main(){
    Data obj;
 Data* ptr = &obj;
//  (*ptr).setData(4,5);
//  (*ptr).getData();
 ptr->setData(4,5);
 ptr->getData();

 Data* ptr1 = new Data;
 ptr1->setData(20,30);
 ptr1->getData();

    return 0;
}