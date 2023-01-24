#include <iostream>
using namespace std;

int main()
{
    char a[] = "decimal";
    char b[] = "medical";
    int H[26] = {};
    int i, j;
    for (i = 0; a[i] != '\0'; i++)
    {
        H[a[i] - 97]++;
    }
    for (j = 0; b[j] != '\0'; j++)
    {
        H[b[j] - 97]--;
        if (H[b[j] - 97] < 0)
        {
            cout << "Not Anagram";
            exit(0);
        }
    }
    cout<<"Anagram";

    return 0;
}