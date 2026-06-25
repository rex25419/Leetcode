class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(2*n);
        int s = 0;
        for(int i = 0 ; i < n ; i++){
            ans[i+s] = nums[i];
            ans[i+s+1] = nums[n+i];
            s += 1;

        }
        return ans ;
    }
};