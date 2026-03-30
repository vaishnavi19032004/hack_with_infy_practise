class Solution {
public:

    int solve(string s , int k , char ch)
    {
        int changes = 0, left=0, maxi=0;
        for(int i =0; i<s.size(); i++)
        {
            if(s[i]!=ch) changes++;

            while(changes>k)
            {
                if(s[left]!=ch) changes--;
                left++;
            }
            maxi=max(maxi,i-left+1);
        }
        return maxi;
    }
    int maxConsecutiveAnswers(string answerKey, int k) {
        return max(solve(answerKey,k,'T'),solve(answerKey,k,'F'));
       
        
    }
};
