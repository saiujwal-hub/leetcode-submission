class Solution {
public:
    int reverse(int x) {
        int a=0;
        int b=0;
        int c=0;
        
       while(x!=0)
       {c=x%10;
     
     if((b>INT_MAX/10)||(b==INT_MAX && c>INT_MAX%10) )
     {return 0;

     }
     if (b < INT_MIN/10 || (b == INT_MIN/10 && c <  INT_MIN%10))
    {return 0;
    }
     b=b*10+c;
       x=x/10;
      
       }return b;
      
}};