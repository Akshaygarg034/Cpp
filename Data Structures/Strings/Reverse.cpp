#include <iostream>
using namespace std;

void swap(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    char s[] = "Akshay";

    // Method 1: Uses 2 arrays
        // int i;
        // for (i = 0; s[i] != '\0'; i++)
        // {
        // }
        // char s1[i];
        // i--;

        // int j;
        // for (j = 0; i >= 0; i--, j++)
        // {
        //     s1[j] = s[i];
        // }
        // s1[j] = '\0';
        // cout << s1;

    // // Method 2: Uses only that 1 array
    // int i;
    // for (i = 0; s[i] != '\0'; i++)
    // {
    // }

    // i--;
    // int j;
    // for (j = 0; j < i; i--, j++)
    // {
    //     swap(s[i], s[j]);
    // }
    // cout << s;

    return 0;
}
