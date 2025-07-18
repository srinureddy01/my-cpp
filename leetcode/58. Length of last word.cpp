class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int left =0;
        int right = s.length()-1;
        if(s.empty()) return 0;
        while(left < right)
        {
            if(s[right] == ' ')
            {
                right--;
            }
            else if(isalnum(s[right]))
            {
                break;
            }
        }
int count =0 , temp=0;
        for(int i=0 ; i<= right; i++)
        {
            if(isalnum(s[i]))
            {
                count++;
            }
            else if(s[i] == ' ')
            {
                temp = count ;
                count =0;
            }
        }
        return count;
    }
};
