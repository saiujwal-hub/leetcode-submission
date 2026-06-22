class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>t1(n);
       int a=0;
       int b=1;
         
         for(int i=0;i<n;i++)
         {if(nums[i]>0)
         {t1[a]=nums[i];
         a+=2;

         }
         else
         {
            t1[b]=nums[i];
            b+=2;
         }
         }return t1;

    }
};