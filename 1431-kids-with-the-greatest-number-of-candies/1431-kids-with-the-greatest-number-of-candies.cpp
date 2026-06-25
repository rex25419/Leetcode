class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        vector<bool>arr(n);
        for(int i = 0 ; i<n ; i++ )
        {
                if ((candies[i] + extraCandies) >= *max_element(candies.begin(),candies.end()))
                arr[i] = true;
                else
                arr[i] = false ;
        } 
        return arr;
        }
};