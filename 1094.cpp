class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {

        int r = trips.size();
        int c = trips[0].size();
         int n = 0;

       
        for(auto &t : trips) {
            n = max(n, t[2]);
        }
        vector<int>v(n+1,0);

        for( auto &t : trips)
        {
            int p=t[0];
            int f=t[1];
            int to=t[2];
            v[f]+=p;
            v[to]-=p;
        }
         int curr=0;
        for(int i=0; i<=n; i++)
        {
            curr+=v[i];
            if(curr>capacity) return false;
        }



        return true;
    }
};
