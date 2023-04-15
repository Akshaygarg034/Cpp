#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int ladderLength(string start, string end, vector<string> &wordList)
    {
        unordered_set<string> words;
        queue<string> q;
        for (auto it : wordList)
        {
            words.insert(it);
        }
        if (words.find(end) == words.end())
            return 0;
        q.push(start);
        int cnt = 0;
        while (!q.empty())
        {
            cnt++;
            int qSize = q.size();
            for (int i = 0; i < qSize; i++)
            {
                string s = q.front();
                q.pop();
                for (int j = 0; j < s.length(); j++)
                {
                    char org = s[j];
                    for (char c = 'a'; c <= 'z'; c++)
                    {
                        s[j] = c;
                        if (s == end)
                            return cnt + 1;
                        if (words.find(s) == words.end())
                            continue;
                        words.erase(s);
                        q.push(s);
                    }
                    s[j] = org;
                }
            }
        }
        return 0;
    }
};

int main()
{

    return 0;
}