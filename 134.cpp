class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
       int n = gas.size();
        vector<int> diff(n);
        
        for(int i=0; i<n; i++)
        {
            diff[i]=gas[i]-cost[i];
        }
        int sum = 0;
        int total=0;
        int ind=0;

        for(int i=0; i<n; i++)
        {
           sum = sum+diff[i];
           total = total +diff[i];
           if(sum<0)
           {
            sum = 0;
            ind=i+1;
           }

        }
        if(total<0) return -1;
        else return ind;
        
    }
};
