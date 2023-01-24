#include <iostream>
using namespace std;

class shop
{
    int itemID[100];
    int itemPrice[100];
    int counter = 0;

public:
    void askUser(void);
    void displayUser(void);
};

void shop ::askUser(void)
{
    cout << "Enter product id of item " << counter+1<< endl;
    cin >> itemID[counter];
    cout << "Enter prize of item " << counter+1<< endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::displayUser(void){
    for (int i = 0; i < counter; i++)
    {
        cout<<"product ID of item "<<i+1<<" is "<<itemID[i]<<endl;
        cout<<"prize of item "<<i+1<<" is "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
shop dukan1;
dukan1.askUser();
dukan1.askUser();
dukan1.askUser();
dukan1.displayUser();
    return 0;
}