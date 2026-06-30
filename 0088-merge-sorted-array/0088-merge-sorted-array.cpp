class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int>k;
        int j=0;
        for(int i=0;i<m;i++)
        {k.push_back(nums1[i]);
        }
         for(int j=0;j<n;j++)
        {k.push_back(nums2[j]);
        }
        sort(k.begin(),k.end());
        for(int i=0;i<n+m;i++)
        {nums1[i]=k[i];

        }


    }
};