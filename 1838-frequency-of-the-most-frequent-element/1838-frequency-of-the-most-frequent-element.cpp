class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        long long s1=0;
        long long  s2=0;
      int i=0;
      int l=0;
      int r=0;
      int ans=0;
      while(l<=r && r<n)
      { s1+=nums[r];
       
      s2=1LL *nums[r]*(r-l+1)-s1;
      while(s2>k)
      {s1=s1-nums[l];
      l++;
      s2=1LL *nums[r]*(r-l+1)-s1;

      }
      if(s2<=k)
      {ans=max(ans,r-l+1);

      }
      r++;

      }return ans;
    }
};