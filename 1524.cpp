class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;
        int even =0; 
        int odd =0;
        int ans = 0;
        for(int i=0; i<n; i++)
        {
            sum = sum+arr[i];
            if(sum%2==0) 
            {
                ans+=odd;
            even++;
            }
            else 
            {
                ans++;
                ans+=even;
            odd++;
        }
        ans = ans%(1000000007);
        }
        ans = ans%(1000000007);

        

        return ans;
    }
};
