#include<iostream>
using namespace std;

class c2;
class c1{
int value1;
public:
void setvalue(int x){
    value1 = x;
}
void display(){
    cout<<value1<<endl;
}
friend void swap(c1 &,c2 &);
};

class c2{
int value2;
public:
void setvalue(int y){
    value2 = y;
}
void display(){
    cout<<value2<<endl;
}
friend void swap(c1 &,c2 &);
};

void swap(c1 &o1, c2 &o2){

   int temp =  o1.value1 ;
   o1.value1 = o2.value2;
   o2.value2 = temp;

}

int main(){
    c1 o1;
    c2 o2;
    o1.setvalue(10);
    o2.setvalue(20);
        cout<<"Values of o1 and o2 before swapping are:"<<endl;
        o1.display();
        o2.display();

    swap(o1,o2);
       cout<<"Values of o1 and o2 after swapping are:"<<endl;
        o1.display();
        o2.display();

    return 0;
}