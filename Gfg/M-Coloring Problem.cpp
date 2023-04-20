#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.

    bool isSafe(bool graph[101][101], int n, int i, int j, vector<int> &color)
    {
        // Funciton to check whether adjacent nodes have the color j or not
        for (int k = 0; k < n; k++)
        {
            if (graph[i][k] && color[k] == j)
                return false;
        }
        return true;
    }

    bool solve(bool graph[101][101], int m, int n, int i, vector<int> &color)
    {
        if (i == n)
            return true;
        // At each Node checking for each color, if safe to Assign color, then pass function to next node
        for (int j = 0; j < m; j++)
        {
            if (isSafe(graph, n, i, j, color))
            {
                color[i] = j;
                if (solve(graph, m, n, i + 1, color))
                    return true;
                // color[i] = -1;
            }
        }
        return false;
    }

    bool graphColoring(bool graph[101][101], int m, int n)
    {
        vector<int> color(n, -1);
        return solve(graph, m, n, 0, color);
    }
};

int main()
{

    return 0;
}