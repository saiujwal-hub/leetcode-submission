class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        vector<int>h(3,0);
        for(int i=0;i<n;i++)
        {h[nums[i]]++;
        

        }
        int k=0;
     for(int i=0;i<h[0];i++)
     {nums[i]=0;
     }
      for(int i=h[0];i<h[0]+h[1];i++)
     {nums[i]=1;
     }
     for(int i=h[0]+h[1];i<h[0]+h[1]+h[2];i++)
     {nums[i]=2;
     }
    }
};