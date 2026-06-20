class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
     int m=0;
         for(auto it:mp)
         {m=max(m,it.second);

         }
         for(auto it:mp)
         {if(m==it.second)
         {
            return it.first;
         }

         }return -1;
    }
};