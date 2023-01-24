#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[] = "Abcdef";
    char s2[] = "Abcden";
    int i, j;

    for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
    {
        if (s1[i] != s2[j])
            break;
    }    
    if (s1[i] == s2[j])
        cout << "Equal";
    else if (s1[i] < s2[j])
        cout << "Smaller";
    else
        cout << "Greater";
    return 0;
}