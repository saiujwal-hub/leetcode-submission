class Solution {
public:
    static bool comparator(pair<char, int> a, pair<char, int> b) {
        return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        vector<pair<char, int>> v;
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        for (auto it : mp) {
            v.push_back(it);
        }

        sort(v.begin(), v.end(), comparator);
        int j=0;
        for (auto it : v) {
           for(int i=0;i<it.second;i++)
           {s[j] = it.first;
           j++;

           } 
            
        }
        return s;
    }
};