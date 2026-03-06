class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int>mpp;
        int sum = 0;
        int maxi=0;
        mpp[0]=-1;
        for(int i=0; i<n; i++)
        {
            if(nums[i]==0) sum = sum -1;
            else sum = sum + 1;

            if(mpp.count(sum))
            {
               maxi = max(maxi , i - mpp[sum]);
            }
            else
            {
                mpp[sum]=i;
            }
            
        }
        return maxi;
        
     
    }
};
