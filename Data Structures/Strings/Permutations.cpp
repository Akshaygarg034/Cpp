#include <iostream>
using namespace std;

void swap(char &a, char &b)
{
    char temp;
    temp = a;
    a = b;
    b = temp;
}

// Use Of 2 Extra Arrays
void perm1(char s[], int k = 0)
{
    static int a[10];
    static char res[10];
    int i;
    if (s[k] == '\0')
    {
        res[k] = '\0';
        cout << res << "\n";
    }
    else
    {
        for (i = 0; s[i] != '\0'; i++)
        {
            if (a[i] == 0)
            {
                res[k] = s[i];
                a[i] = 1;
                perm1(s, k + 1);
                a[i] = 0;
            }
        }
    }
}

// Use Of No Extra Array
void perm2(char s[], int l, int h)
{
    int i;
    if (l == h)
    {
        cout << s << "\n";
    }
    else
    {
        for (i = l; i <= h; i++)
        {
            swap(s[l], s[i]);
            perm2(s, l + 1, h);
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    char s[] = "abc";
    // perm1(s, 0);
    perm2(s, 0, 2);
    return 0;
}