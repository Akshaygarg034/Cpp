#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class Solution 
{
    public:
    //Function to find out minimum steps Knight needs to reach target position.
	int minStepToReachTarget(vector<int>&KnightPos,vector<int>&TargetPos,int N)
	{
	    vector<vector<int>> m(N, vector<int>(N,0));
	    queue<pair<int, int>> q;
	    int x1 = KnightPos[0];
	    int y1 = KnightPos[1];
	    int x2 = TargetPos[0];
	    int y2 = TargetPos[1];
	    q.push({x1-1, y1-1});
	    while(!q.empty()){
	        int x = q.front().first;
	        int y = q.front().second;
	        q.pop();
	        if(x-2 >=0 && y-1 >=0 && x-2 <=N-1 && y-1 <= N-1 && m[x-2][y-1] == 0){
	            q.push({x-2, y-1});
	            m[x-2][y-1] = m[x][y]+1; 
	        }
	        if(x-1 >=0 && y-2 >=0 && x-1 <=N-1 && y-2 <= N-1 && m[x-1][y-2] == 0){
	            q.push({x-1, y-2});
	            m[x-1][y-2] = m[x][y]+1;  
	        }
	        if(x+1 >=0 && y-2 >=0 && x+1 <=N-1 && y-2 <= N-1 && m[x+1][y-2] == 0){
	            q.push({x+1, y-2});
	            m[x+1][y-2] = m[x][y]+1;  
	        }
	        if(x+2 >=0 && y-1 >=0 && x+2 <=N-1 && y-1 <= N-1 && m[x+2][y-1] == 0){
	            q.push({x+2, y-1});
	            m[x+2][y-1] = m[x][y]+1;  
	        }
	        if(x+2 >=0 && y+1 >=0 && x+2 <=N-1 && y+1 <= N-1 && m[x+2][y+1] == 0){
	            q.push({x+2, y+1});
	            m[x+2][y+1] = m[x][y]+1;  
	        }
	        if(x+1 >=0 && y+2 >=0 && x+1 <=N-1 && y+2 <= N-1 && m[x+1][y+2] == 0){
	            q.push({x+1, y+2});
	            m[x+1][y+2] = m[x][y]+1;  
	        }
	        if(x-1 >=0 && y+2 >=0 && x-1 <=N-1 && y+2 <= N-1 && m[x-1][y+2] == 0){
	            q.push({x-1, y+2});
	            m[x-1][y+2] = m[x][y]+1; 
	        }
	        if(x-2 >=0 && y+1 >=0 && x-2 <=N-1 && y+1 <= N-1 && m[x-2][y+1] == 0){
	            q.push({x-2, y+1});
	            m[x-2][y+1] = m[x][y]+1;  
	        }
	    }
	    return m[x2-1][y2-1];
	}
};

int main(){
    
    return 0;
}