class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp = nums;
        

        sort(temp.begin(), temp.end());

        int mapping[101] = {0}; 
        for (int i = n - 1; i >= 0; i--) {
            mapping[temp[i]] = i;
        }
        
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = mapping[nums[i]];
        }
        
        return ans;
    }
};