#include<iostream>
#include<cmath>
using namespace std;

class simpleCalculator{
public:
float add(float a, float b){
    return (a+b);
}
float subtract(float a, float b){
    return (a-b);
}
float multiply(float a, float b){
    return (a*b);
}
float divide(float a, float b){
    return (a/b);
}
};

class scientificCalculator{
public:
float underRoot(float x){
    return sqrt(x);
}
float logarithm(float x){
return log(x);
}
float tangent(float x){
    return tan(x);
}
};

class hybridCalculator: public simpleCalculator, public scientificCalculator{
public:
void displaySimple(float x, float y){
    cout<<"!--------Simple Calculator--------!"<<endl;
    cout<<"the sum of "<<x<<" and "<<y<<" is "<<add(x,y)<<endl;
    cout<<"the difference of "<<x<<" and "<<y<<" is "<<subtract(x,y)<<endl;
    cout<<"the product of "<<x<<" and "<<y<<" is "<<multiply(x,y)<<endl;
    cout<<"the ratio of "<<x<<" and "<<y<<" is "<<divide(x,y)<<endl;
}
void displayScientific(float x){
cout<<"!-------Scientific Calculator-----!"<<endl;
cout<<"The square root of "<<x<<" is "<<underRoot(x)<<endl;
cout<<"The log of "<<x<<" is "<<logarithm(x)<<endl;
cout<<"The tan of "<<x<<" is "<<tangent(x)<<endl;
}
};
int main(){
    hybridCalculator calc;
    calc.displaySimple(5,10);
    calc.displayScientific(2);
    return 0;
}