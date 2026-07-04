class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int ro = mat.size();
        int co = mat[0].size();
        vector<vector<int>>ans(r , vector<int>(c));
        if(ro * co != r*c){
            return mat ;
        }
        int col = 0 ;
        int row = 0;
        for(int i = 0 ; i < ro ; i++){
            
            for(int j = 0; j < co; j++){
                ans[row][col]= mat[i][j];

                    col ++ ;
                    if(col == c){
                        col = 0;
                        row ++ ;
                    }
            }
        }
        
        return ans ;
    }
};