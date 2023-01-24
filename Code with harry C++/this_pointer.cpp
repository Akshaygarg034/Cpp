#include<iostream>
using namespace std;

class shop{
    int a;
    public:
    shop& setData(int a){
       this->a = a;
       return *this;
    }
    void getData(){
        cout<<"The value of a is "<<a<<endl;
    }
};

int main(){
    shop abc;
    abc.setData(5).setData(10);
    abc.getData();
    return 0;
}