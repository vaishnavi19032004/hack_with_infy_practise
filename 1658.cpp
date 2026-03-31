class Solution {
public:
    int minOperations(vector<int>& nums, int x) {

        int n = nums.size();
        int sum1 = 0;

        for (int i = 0; i < n; i++) sum1 += nums[i];

        int k = sum1 - x;

        // 🔥 fix 1: edge cases
        if (k < 0) return -1;
        if (k == 0) return n;

        map<long long, int> preSum;
        long long sum = 0;
        int len = 0;

        // 🔥 fix 2: important initialization
        preSum[0] = -1;

        for (int i = 0; i < n; i++)
        {
            sum = sum + nums[i];

            long long rem = sum - k;

            // 🔥 fix 3: directly check rem
            if (preSum.find(rem) != preSum.end())
            {
                int len1 = i - preSum[rem];
                len = max(len, len1);
            }

            // 🔥 fix 4: store first occurrence only
            if (preSum.find(sum) == preSum.end())
            {
                preSum[sum] = i;
            }
        }

        return (len == 0) ? -1 : n - len;
    }
};
