class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size() ;
        vector<int>ans(n);
        int sum = 0 ;
        for(int i = 0; i<n ; i++){
            for(int j = 0 ; j< accounts[i].size() ; j++){
                sum  = sum + accounts[i][j];
            }
            ans[i] = sum ;
            sum = 0 ; 
        }
        return *max_element(ans.begin(),ans.end());
    }
};