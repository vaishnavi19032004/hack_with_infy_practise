class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int n = s.size();
        int count = 0;
        for(char c = 'a'; c<='z';c++)
        {
            int first = s.find(c);
            int last = s.rfind(c);
            if(first!=-1 && last!=-1 && last>first)
            {
                unordered_set<char>st;
                for(int i=first+1; i<last; i++)
                {
                    st.insert(s[i]);
                }
                int m = st.size();
                count = count + m;
            }
        }
        return count;
    }
};
