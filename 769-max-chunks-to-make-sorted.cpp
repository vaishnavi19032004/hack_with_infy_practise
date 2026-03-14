class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int n = arr.size();
        int sum=0;
        int chunk = 0;
        int prev_sum=0;
        for(int i=0; i<n; i++)
        {
            int a = arr[i];
            int rsum = (i*(i+1))/2;
            sum = sum+arr[i];
            if(sum-prev_sum==rsum-prev_sum)
            {
                chunk++;
                prev_sum = sum;
            }

        }
        return chunk;

        


        
    }
};
