#include <iostream>
using namespace std;

// Using Hash Table
void duplicate_1(char s[])
{
    int H[26] = {};
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        H[s[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (H[i] > 1)
        {
            cout << char(i + 97) << " is repeated " << H[i] << " times\n";
        }
    }
}

// Using Bitwise Operations
void duplicate_2(char s[])
{
    int x = 1, H = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++)
    {
        int num = s[i] - 97;
        x = (x << num);
        if ((x & H) > 0)
        {
            cout << s[i] << " is duplicate\n";
        }
        else
            H = x | H;
        x = 1;
    }
}

int main()
{
    char s[] = "abbbcdee";
    duplicate_2(s);
    return 0;
}