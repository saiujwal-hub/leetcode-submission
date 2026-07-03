class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lb=lower_bound(nums.begin(),nums.end(),target);
        int ind=lb-nums.begin();
        auto up=upper_bound(nums.begin(),nums.end(),target);
         int ind1=up-nums.begin();
      if(lb==nums.end()||nums[ind]!=target )
      {return{-1,-1};

      }
      else
      {
        return{ind,ind1-1};
      }
    }
};