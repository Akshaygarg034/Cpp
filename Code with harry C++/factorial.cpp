#include <iostream>
using namespace std;

int factorial(int n)
{
    if(n<2){
        return 1;
    }
    return n* factorial(n-1);
}
int main()
{
    int num1;
    cout << "Enter a number" << endl;
    cin >> num1;

    cout << "the factorial of "<<num1<<" is " << factorial(num1);

    return 0;
}