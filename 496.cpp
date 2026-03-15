class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        
        stack<int>st;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> nge(m);

        for(int i=m-1; i>=0; i--)
        {
            while(!st.empty()&& st.top()<=nums2[i])
            {
                st.pop();
            }
            if(st.empty()) nge[i]=-1;
            else nge[i]=st.top();

            st.push(nums2[i]);
        }

        vector<int> v(n);
        for(int i=0; i<n; i++)
        {
            int ind=-1;
            for(int j=0 ; j<m; j++)
            {
                if(nums1[i]==nums2[j]) 
                {
                ind=j;
                break;
                }
            }
            v[i]=nge[ind];
        }


        return v;
    }
};
