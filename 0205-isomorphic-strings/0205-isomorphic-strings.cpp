class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;
        if (s.length() == t.length()) {
            for (int i = 0; i < s.size(); i++) {
                if (mp1.find(s[i]) == mp1.end()) {
                    mp1[s[i]] = t[i];

                } else {
                    if (mp1[s[i]] == t[i]) {
                        continue;

                    } else {
                        return false;
                    }
                }
            }
            for (int i = 0; i < s.size(); i++) {
                if (mp2.find(t[i]) == mp2.end()) {
                    mp2[t[i]] = s[i];

                } else {
                    if (mp2[t[i]] == s[i]) {
                        continue;

                    } else {
                        return false;
                    }
                }
            }
        }return true;
    }
};
