class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        vector<int> x(n);
        for (int i = 0 ; i < n ; i++) {
            for (int j = 0; j < n; j++) {
            x[i] += matrix[i][j];
        }}
        return x;
    }
};
// i see a pattern in this add the numbers in the element lets try 
// so x was basically a 1 d array and we made it a 2d array ? or we limited the values of x to the number of values in n ? 
