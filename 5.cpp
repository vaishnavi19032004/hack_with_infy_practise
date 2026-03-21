class Solution {
public:

    string ss(string &s, int left, int right)
    {
          while(left>=0 && right<s.size() && s[left]==s[right])
          {
            left--;
            right++;
          }

          return s.substr(left+1, right - left - 1);

    }

    string longestPalindrome(string s) {

        string even;
        string odd;
        string ans="";
        for(int i=0; i<s.size(); i++)
        {
            even = ss(s,i,i+1);
            odd = ss(s,i,i);
            
            if (odd.size() > ans.size()) ans = odd;
            if (even.size() > ans.size()) ans = even;

        }
        
        return ans;
    }
};
