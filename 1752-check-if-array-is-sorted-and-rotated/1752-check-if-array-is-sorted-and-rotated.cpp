class Solution {
public:
    bool check(vector<int>& nums) {
        vector<int> t=nums;
        int n=nums.size();
        for (int i = 0; i < nums.size(); i++) {
            t[i] = nums[i];
        }
        sort(t.begin(), t.end());
for(int x=0;x<=n;x++)
{int c=0;
    for(int i=0;i<n;i++)
    {
if(t[(i+x) % n]==nums[i])
{
    c++;
}
    }
    if(c==n)
    {
        return true;
    }
}return false;
    }};

        