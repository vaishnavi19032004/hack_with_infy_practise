class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int high = n-1;
        int low=0;
        int mid;
        while(low<=high)
        {
             mid=(low+high)/2;
            if(target==nums[mid])
            {
                int s=mid;
                int p=mid;
                while(p<n)
                {
                    if(nums[p]!=target) break;

                    else p++;
                }
                while(s>=0)
                {
                    if(nums[s]!=target) break;
                    else s--;
                }
               
                vector<int>v={s+1,p-1};
                return v;
            }

            else if(target<nums[mid])
            {
                high=mid-1;
            }
            else
            {
                low=mid+1;
            }

           
        }
        vector<int>vt={-1,-1};
        return vt;
        
    }
};
