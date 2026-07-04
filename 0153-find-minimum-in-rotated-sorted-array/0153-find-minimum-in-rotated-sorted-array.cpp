class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;int n=nums.size();
        int h=n-1;int m=0;int c=0;int ans=nums[0];
        while(l<=h)
        {m=(l+h)/2;
        
        if(nums[l]<=nums[m])
        {ans=min(ans,nums[l]);
        l=m+1;

        }
        else if(nums[m]<=nums[h])
        {ans=min(ans,nums[m]);
       h=m-1;

        }

        }return ans;

    }

};