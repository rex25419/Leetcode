class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int index = 0 ;
        if(ruleKey == "type"){
             index = 0;
        }
        else if (ruleKey == "color"){
             index = 1;
        }
        else if (ruleKey == "name"){
             index = 2;
        }
        int match = 0 ;
        for(int i = 0 ; i < items.size() ; i++){
            if(items[i][index] == ruleValue) {
                match += 1; 
            }
        }
        return match ;
    }
};