//To print the shuffle elements
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    vector<int>nums;
    for(int i=0;i<2*n;i++)
    {
        cin>>t;
        nums.push_back(t);
    }
    vector<int>x;
    for(int i=0;i<n;i++)
    {
        x.push_back(nums[i]);
        x.push_back(nums[n+i]);
    }
    for(int i=0;i<2*n;i++)
    {
        cout<<x[i]<<" ";
    }

}