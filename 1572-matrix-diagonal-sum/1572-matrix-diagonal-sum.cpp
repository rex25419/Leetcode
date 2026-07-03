class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int s_sum = 0;
        int p_sum = 0 ;
        for (int i = 0; i < n; i ++ ){
            p_sum += mat[i][i];
            if(i != n-1-i){
                s_sum += mat[i][n-1-i];
            }
        }
        return (p_sum + s_sum);
    }
};