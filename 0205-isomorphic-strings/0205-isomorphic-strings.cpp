class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;

        unordered_map<char, char> s_t;
        unordered_map<char, char> t_s;

        for (int i = 0; i < s.length(); i++) {
            char c1 = s[i];
            char c2 = t[i];


            if ((s_t.count(c1) && s_t[c1] != c2) ||
                (t_s.count(c2) && t_s[c2] != c1)) {
                return false;
            }

            s_t[c1] = c2;
            t_s[c2] = c1;
        }

        return true;
    }
};