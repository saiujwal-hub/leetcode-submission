class Solution {
public:
    int findPeakElement(vector<int>& nums) {
         int n=nums.size();int h=n-1;int l=0;int m=0;
         int ans=0;
        while(l<=h)
        {m=(l+h)/2;
        if(h==m)
        {return m;

        }
        
        if(nums[m]>nums[m+1])
        {
        h=m;

        }
        else
        {
        l=m+1;
            
        }

        }return -1;

    }


};