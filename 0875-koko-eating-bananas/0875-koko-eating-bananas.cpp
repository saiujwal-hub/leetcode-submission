class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxp = 0;
        int minp = piles[0];
        int low = 1;
        int ans=0;
        
        int mid = 0;
        for (auto it : piles) {
            maxp = max(maxp, it);
            minp = min(minp, it);
        }
        int high = maxp;
        while (low <= high) {
            mid = (low + high) / 2;
            long long hours = 0;
            for(auto it:piles)
            {hours+=ceil((double)it/mid);

            }
         if(hours<=h)
         {ans=mid;
         high=mid-1;

         }
         else
         {low=mid+1;

         }
        }return ans;
    }
};