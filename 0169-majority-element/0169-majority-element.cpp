class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int out = nums[0] ;
        int count_1 = 1 ; 
        int count_2 = 1 ;
        sort(nums.begin(),nums.end());
        if(nums.size() == 1)return out;
        for(int i = 0; i < nums.size() - 1 ; i++ ){
            if(nums[i] == nums[i+1]){
                count_1 ++ ;
            }
            else { if(count_1 > count_2){
                out = nums[i] ;
                count_2 = count_1 ;}

                count_1 = 1 ;
            }
            

        }
       if(count_1 > count_2){
        out =nums.back(); ;
    }
    return out ;
    }
};