class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
        int n = nums.size();
        
        if(n % k != 0) return false;

        sort(nums.begin(), nums.end());

        map<int,int> mpp;
        for(int x : nums)
            mpp[x]++;

        for(auto &m : mpp)
        {
            int a = m.first;
            int f = mpp[a];

            if(f == 0) continue;

            for(int j = a; j < a + k; j++)
            {
                if(mpp.find(j) == mpp.end() || mpp[j] < f)
                    return false;

                mpp[j] -= f;
            }
        }

        return true;
    }
};
