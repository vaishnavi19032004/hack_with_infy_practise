class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int ans = 0;
        int i = 0;
        int j = n-1;
        while(i<j)
        {
            int l = j-i;
            int b = min(height[i],height[j]);
            int a = l*b;
            ans = max(ans, a);
            if(height[i]<=height[j]) i++;
            else j--;
        }

        return ans;
       
    }
};
