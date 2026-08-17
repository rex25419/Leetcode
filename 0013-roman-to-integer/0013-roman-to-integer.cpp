
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> rm = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
        int n =s.length();
        int t = 0; 
        for(int i = 0; i < n ; i++){
            if(i+1<n && rm[s[i]] < rm[s[i+1]]){
                t -= rm[s[i]];
            }
            else{ 
                    t += rm[s[i]];
            }

        }
        return t ; 
    }
};