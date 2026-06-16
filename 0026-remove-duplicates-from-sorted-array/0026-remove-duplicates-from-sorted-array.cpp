class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>s;
        for(int x:nums)
        {if(s.find(x)!=s.end())
        {
            
        }
        else
        {
            s.insert(x);
        }

        }int i=0;
        for(auto it:s)
        {
            nums[i++]=it;
            

        }return s.size();
       
    }
};