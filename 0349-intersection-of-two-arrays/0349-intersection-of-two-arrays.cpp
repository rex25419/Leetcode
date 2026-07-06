class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> st_1(nums1.begin(), nums1.end());
        set<int> st_2(nums2.begin(), nums2.end());
        vector<int> res ;
        auto it1 = st_1.begin();
        auto it2 = st_2.begin();

        while (it1 != st_1.end() && it2 != st_2.end()) {
            if (*it1 == *it2) {
                res.push_back(*it1); 
                it1++;
                it2++;
            } 
            else if (*it1 < *it2) {
                it1++;
            } 
            else {
                it2++;
            }
        }
        return res; 
    }
};