class Solution {
public:
    int maxSumRangeQuery(vector<int>& nums, vector<vector<int>>& requests) {
        int n = nums.size();
        vector<int> diff(n + 1, 0);

        for (auto &r : requests) {
            diff[r[0]] += 1;
            if (r[1] + 1 < n) {
                diff[r[1] + 1] -= 1;
            }
        }

        const int mod = 1000000007;

        vector<int> freq(n);
        freq[0] = diff[0];

        for (int i = 1; i < n; i++) {
            freq[i] = freq[i - 1] + diff[i];
        }

        sort(freq.begin(), freq.end());
        sort(nums.begin(), nums.end());

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            ans = (ans + (1LL * freq[i] * nums[i]) % mod) % mod;
        }

        return ans % mod;
        
    }
};
