#include <iostream>
using namespace std;

int main()
{
    int i, v_count = 0, c_count = 0, w_count = 1;
    char s[] = "This   is great";
    for (i = 0; s[i] != '\0'; i++)
    {
        // For vowels and consonants
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
        {
            v_count++;
        }
        else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
        {
            c_count++;
        }
        // For words
        else if (s[i] == ' ' && s[i - 1] != ' ')
        {
            w_count++;
        }
    }
    cout <<v_count << " vowels, "<< c_count<<" consonants and "<<w_count<<" words";
    return 0;
}