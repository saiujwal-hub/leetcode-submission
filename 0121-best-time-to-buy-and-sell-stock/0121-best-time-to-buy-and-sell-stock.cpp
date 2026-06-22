class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int p=0;int a=0; int b=0;
        int m1=prices[0];int m3=0;
         int m2=0;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            m1=min(m1,prices[i]);
            if(prices[i]==m1)
           {a=i;
           
           }m3=max(m3,prices[i]-prices[a]);

        }return m3;
        
    }
};