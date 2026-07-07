class Solution {
public:
    void lr(string &s,int n,int d)
    {reverse(s.begin(),s.begin()+d);
    reverse(s.begin()+d,s.end());
    reverse(s.begin(),s.end());
    }


        bool rotateString(string s, string goal) {
            int k=0;
        for(int d=0;d<s.size();d++)
        {
       if(s==goal)
       {return true ;

       }
       else
       {
        lr(s,s.size(),1);
       }
        }return false;
       

}};