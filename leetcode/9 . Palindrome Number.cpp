class Solution {
public:
    bool isPalindrome(int x) 
    {
       int a , b = 0 , temp = x;
       if(x < 0) return false;

       while(temp > 0)
       {
        a = temp % 10;
            if (b > (INT_MAX - a) / 10) {
                return false; // Overflow will occur
            }
         b= b * 10 + a;
        temp = temp / 10;
       }

       if(x == b) return true;
       else return false;

    }
};
