class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> k;
        int n = intervals.size();
        int s1 = intervals[0][0];
        int e1 = intervals[0][1];
        int k1 = 0;
        for (int i = 1; i < n; i++) {
            if (intervals[i][0] <= e1) {
                s1 = min(s1, intervals[i][0]);
                e1 = max(e1, intervals[i][1]);

            } else {
                k.push_back({s1, e1});
                s1 = intervals[i][0];
                e1 = intervals[i][1];
            }
            
        }k.push_back({s1, e1});
        return k;
    }
};