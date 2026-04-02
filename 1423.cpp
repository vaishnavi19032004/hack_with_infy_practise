class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l = n-k;
        int sum=0;
        int s = 0;
        for(int i=0; i<n; i++)
        {
            s+=cardPoints[i];
        }
        for(int i=0; i<l; i++)
        {
            sum+=cardPoints[i];
        }
        int mn=sum;

        for(int i=l; i<n; i++)
        {
            sum+=cardPoints[i]-cardPoints[i-l];
            mn=min(mn,sum);
        }

        return s-mn;
    }
};
