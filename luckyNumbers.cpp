class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> res;
        for(int i=0; i<n; i++) {
            int min_i = -1, minEle = INT_MAX;
            for(int j=0; j<m; j++) {
                if(matrix[i][j] < minEle) {
                    min_i = j;
                    minEle = matrix[i][j];
                }
            }
            bool check = 1;
            for(int k=0; k<n; k++) {
                if(matrix[i][min_i] < matrix[k][min_i]) {
                    check = 0;
                    break;
                }
            }
            if(check) {
                res.push_back(minEle);
            }
        }
        return res;
    }
};