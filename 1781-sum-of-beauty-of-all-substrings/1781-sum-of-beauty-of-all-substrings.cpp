class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {int h[26]={0};
        for(int j=i;j<n;j++)
        {h[s[j]-'a']++;
        int a=0;int b=INT_MAX;
       for(int k=0;k<26;k++)
       { a=max(a,h[k]);
       if(h[k]>0)
       {
        b=min(b,h[k]);
       }


       } ans+=a-b;
        }

        }return ans;
       
       
    }
};