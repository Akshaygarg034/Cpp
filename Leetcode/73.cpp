// Approach 1: Using extra space.

// class Solution {
// public:
//     void setZeroes(vector<vector<int>>& matrix) {
//         int m = matrix.size();
//         int n = matrix[0].size();

//         // Initializing rows and column matrix
//         vector<int> row(m, -1);
//         vector<int> col(n, -1);
        
//         // If element is 0, marking its row 0 in row matrix and column 0 in col matrix.
//         for(int i = 0; i < m; i++){
//             for(int j = 0; j < n; j++){
//                 if(matrix[i][j] == 0){
//                     row[i] = 0;
//                     col[j] = 0;
//                 }
//             }
//         }
        
//         // Checking in rows and column matrix
//         for(int i = 0; i < m; i++){
//             for(int j = 0; j < n; j++){
//                 if(row[i] == 0 || col[j] == 0){
//                     matrix[i][j] = 0;
//                 }
//             }
//         }
//     }
// };


// Approach 2: Without using extra space.
// In this, we use 1st row and 1st column as reference row and col matrix.
// But 1st row and 1st col coincides, so we take another variable for column 0.

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // row -> matrix[..][0]
        // col -> matrix[0][..]
        int col0 = 1;

        // If element is 0, marking its row 0 in row matrix and column 0 in col matrix.
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                    // making row matrix 0
                    matrix[i][0] = 0;
                    
                    // making col matrix 0
                    if(j != 0) matrix[0][j] = 0;
                    else col0 = 0;
                }
            }
        }
        
        // Checking in rows and column matrix but we cant take 1st row and 1st col elements because they are reference elements. so take other elements firstly.
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; j++){
                if(matrix[i][0] == 0 || matrix [0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // Changing reference column because if we firstly change reference row, we can get wrong results.
        if(matrix[0][0] == 0){
            for(int j = 0; j < n; j++){
                matrix[0][j] = 0;
            }
        }

        // Changing reference row
        if(col0 == 0){
            for(int i = 0; i < m; i++) matrix[i][0] = 0;
        }

    }
};
