class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

      
        set<vector<int>> p;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                set<long long> h;
                for (int k = j + 1; k < n; k++) {
                   long long s = 1LL * nums[i] + nums[j];
                    s += nums[k];
                    long long f = target - (s);
                    if (h.find(f) != h.end()) {
                               vector<int> v;
                        v = {nums[i], nums[j], nums[k], (int)f};
                        sort(v.begin(), v.end());
                        p.insert(v);
                    }
                    h.insert(nums[k]);
                }
            }
        }
        vector<vector<int>> t(p.begin(), p.end());
        return t;
    }
};