class Solution {
public:
    string reverseWords(string s) {
        string k="";string a="";
        vector<string>w;
        s+=" ";
        for(int i=0;i<s.size();i++)
        {if(s[i]!=' ')
        {k+=s[i];
        

        }
        else
        {if(k.size()!=0)
        {
            w.push_back(k);
        }
        k="";

        }

        }
        reverse(w.begin(),w.end());
        for(auto it:w){
            a+=it+" ";


        }a.erase(a.size()-1);
        return a;
    }
};