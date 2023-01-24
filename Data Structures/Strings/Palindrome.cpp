#include <iostream>
using namespace std;

int main()
{
    char s[] = "madam";
    int i, j;
    for (j = 0; s[j] != '\0'; j++)
    {
    }
    j--;
    for (i = 0; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            cout << "Not a Palindrome";
            exit(0);
            // return 0;
        }
    }
    cout << "Palindrome";

    return 0;
}