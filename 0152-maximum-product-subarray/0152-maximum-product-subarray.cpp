class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int k=nums[0];
        for(int i=0;i<nums.size();i++)
        {int p=1;
        for(int j=i;j<nums.size();j++)
        {p*=nums[j];
        k=max(k,p);

        }

        }return k;
        
    }
};