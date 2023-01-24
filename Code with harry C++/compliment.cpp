#include<iostream>
#include<string>
using namespace std;

class binary{
    private: string s;
    public:
    void enter(void);
    void check(void);
    void compliment(void);
    void display(void);
};

void binary::enter(void){
cout<<"Enter a number"<<endl;
cin>>s;
}

void binary::check(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Enter a valid binary number"<<endl;
            exit(0);
        }
    }
    
}

void binary::compliment(void){
for (int i = 0; i < s.length(); i++)
{
  if(s.at(i)=='1'){
      s.at(i)='0';
  }
  else{
      s.at(i)='1';
  }  
}
}

void binary::display(){
    cout<<"Your Complimented binary no. is "<<s;
}

int main(){
    binary akshay;
    akshay.enter();
    akshay.check();
    akshay.compliment();
    akshay.display();
    return 0;
}