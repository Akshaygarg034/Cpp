// Recusrion + Memoization solution

// class Solution {
// public:
//     int t[101][101];
//     int solve(int m, int n, int i, int j){
//         if(i == m-1 && j == n-1){
//             return 1;
//         }

//         if(i < 0 || j < 0 || i >=m || j >= n) return 0;

//         if(t[i][j] != -1) return t[i][j];

//         return t[i][j] = solve(m, n, i+1, j) + solve(m, n, i, j+1);
//     }
    
//     int uniquePaths(int m, int n) {
//         memset(t, -1, sizeof(t));
//         return solve(m, n, 0, 0);
//     }
// };


// Most optimal solution (Using Combinations)

class Solution {
public:
    int uniquePaths(int m, int n) {
        double ans = 1;
        int N = m+n-2;
        int R = n-1;

        for(int i = 1; i <= R; i++){
            ans = ans * (N - R + i)/ i;
        }

        return (int)ans;
    }
};
