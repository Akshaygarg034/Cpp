#include<iostream>
using namespace std;

class bank{
    int principal;
    float rate;
    int years;
    float returnValue;
    public:
    bank(int p, float r, int t);
    bank(int p, int r, int t);
    void showAmount(){
        cout<<"Your initial amount was "<<principal<<" Rs only.\\"<<endl;
        cout<<"Your amount after "<<years<<" years will become "<<returnValue<<" Rs only.\\"<<endl;
    }

};
bank :: bank(int p, int r1, int t){
    principal = p;
    rate = float(r1)/100;
    years = t;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue + rate*returnValue;
    }
    
}

bank :: bank(int p, float r, int t){
    principal = p;
    rate = r;
    years = t;
    returnValue = principal;
    for (int i = 0; i < years; i++)
    {
        returnValue = returnValue + rate*returnValue;
    }
    
}

int main(){
    int p,t;
    int r1;
    float r;
    cout<<"If we take integer type rate"<<endl;
    cout<<"Enter the values of p, r , and t"<<endl;
    cin>>p>>r1>>t;
    bank o1(p,r1,t);
    o1.showAmount();

    cout<<"If we take float type rate"<<endl;
    cout<<"Enter the values of p, r , and t"<<endl;
    cin>>p>>r>>t;
    bank o2(p,r,t);
    o2.showAmount();
    return 0;
}