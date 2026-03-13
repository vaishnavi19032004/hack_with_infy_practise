#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
int n;
cin>>n;
int dish[n];
for(int i=0; i<n; i++)
{
    cin>>dish[i];
}
map<int,int>mpp;
int last_ele=0;
int last_ind=0;
for(int i=0; i<n; i++)
{
    if(mpp.find(dish[i]) == mpp.end()) 
    {
    mpp[dish[i]]++;
    last_ele=dish[i];
    last_ind=i;
    }

    else
    {
        if(last_ele==dish[i] && last_ind+1==i) continue;

        else{
            mpp[dish[i]]++;
    last_ele=dish[i];
    last_ind=i;
        }
    }

}
int ans=-1;
int max_freq = -1;

for(auto i : mpp)
{
    if(i.second>max_freq)
    {
        ans = i.first;
        max_freq=i.second;
    }
    else if(i.second==max_freq) {
        if(ans>i.first) ans=i.first;

    }
}
cout<<ans<<endl;
    }
}
