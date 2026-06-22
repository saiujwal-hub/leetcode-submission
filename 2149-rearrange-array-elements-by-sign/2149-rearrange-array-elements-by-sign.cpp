class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>t1;
        vector<int> t2;
         
         for(int i=0;i<n;i++)
         {if(nums[i]>=0)
         {t1.push_back(nums[i]);

         }
         else
         {
            t2.push_back(nums[i]);
         }

         }int j=0;int k=0;
         for(int i=0;i<n;i++)
         {
            if(i%2==0)
            {nums[i]=t1[j];
            j++;

            }
            else 
            {nums[i]=t2[k];
            k++;

            }
         }return nums;
    }
};