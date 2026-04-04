class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        int n = beans.size();
        sort(beans.begin(),beans.end());
       long long ans = LLONG_MAX;
       long long sum=0;
       long long csum=0;

       for(int i=0; i<n; i++)
       {
        sum+=beans[i];
       }

       for(int i=0; i<n; i++)
       {
        
        long long x=beans[i];
        csum=x*(n-i);
        long long y = sum-csum;
        ans=min(ans,sum-csum);
        
       }
        return ans;
    }
};
