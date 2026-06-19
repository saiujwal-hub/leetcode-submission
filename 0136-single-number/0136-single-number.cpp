class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        int m=0;
        for(int i=0;i<nums.size();i++)
        {m=max(m,nums[i]);


        }
      unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {if(it.second==1)
        {
            return it.first;
        }

        }return -1;
    }
};