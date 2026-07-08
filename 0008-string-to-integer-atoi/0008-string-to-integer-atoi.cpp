class Solution {
public:
    int myAtoi(string s) {
        int si = 1;
        int i = 0;
        long long num = 0;
        while (i < s.size() && s[i] == ' ') {
            i++;
        }

        if (i < s.size() && s[i] == '-') {
            si = -1;
            i += 1;

        } else if (i < s.size() && s[i] == '+') {
            si = 1;
            i += 1;
        }

        while (i < s.size() && isdigit(s[i])) {
            int digit = s[i] - '0';
          
            num *= 10;
            num += digit;
             if (num > INT_MAX && si==1) {
            return INT_MAX;

        } 
        else if(si==-1 && num>2147483648)
        {   return INT_MIN;

        }
             
            i++;
        }
        num *= si;
         return num;
    }
};
