class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string s1="";
        for(int i=0;i<n;i++)
        {if(isalnum(s[i]))
        {s1+=s[i];

        }

        }
        int n2=s1.size();
        for(int i=0;i<n2;i++)
        {s1[i]=tolower(s1[i]);

        }
        for(int i=0;i<n2/2;i++)
        {if (s1[n2-i-1]!=s1[i])
        {return false;

        }

        }return true;
        
    }
};