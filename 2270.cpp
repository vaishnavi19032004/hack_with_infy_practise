class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long sum=0;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            sum=sum+nums[i];
        }
        int way=0;
        long long sum2=0;
        for(int i=0; i<n-1; i++)
        {
            sum2=sum2+nums[i];
            sum=sum-nums[i];
            if(sum2>=sum)
            {
                way++;
            }
        }

      return way;  
    }
};
