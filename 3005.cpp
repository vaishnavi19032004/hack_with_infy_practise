class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int> freq;

        for(int x : nums){
            freq[x]++;
        }

        int maxi = 0;
        for(auto &p : freq){
            maxi = max(maxi, p.second);
        }

        int ans = 0;
        for(auto &p : freq){
            if(p.second == maxi){
                ans += p.second;
            }
        }

        return ans;
        
    }
};
