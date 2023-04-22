#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to merge two nodes a and b.
    void union_(int a, int b, int par[], int rank1[])
    {
        a = checkPar(a, par);
        b = checkPar(b, par);

        if (rank1[a] < rank1[b])
            par[a] = b;
        else if (rank1[b] < rank1[a])
            par[b] = a;
        else
        {
            par[a] = b;
            rank1[b]++;
        };
    }

    int checkPar(int elem, int par[])
    {
        if (par[elem] == elem)
            return elem;
        return par[elem] = checkPar(par[elem], par);
    }

    // Function to check whether 2 nodes are connected or not.
    bool isConnected(int x, int y, int par[], int rank1[])
    {
        return checkPar(x, par) == checkPar(y, par);
    }
};

int main()
{

    return 0;
}