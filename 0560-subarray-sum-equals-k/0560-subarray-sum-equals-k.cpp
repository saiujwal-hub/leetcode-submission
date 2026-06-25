class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ps=0;int c=0;
      
        unordered_map<int ,int >mp;
          mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {ps+=nums[i];
        int remove=ps-k;
        c+=mp[remove];
        mp[ps]+=1;

        }return c;
    }
};