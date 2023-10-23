#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t=0,i=0;
    cout<<"Enter n:"<<endl;
    cin>>n;
    vector<int>nums;
    for(i=0;i<n;i++)
    {
        cin>>t;
        nums.push_back(t);
    }
    vector<int>ans(2*n);
    for(i=0;i<n;i++)
    {
        ans[i]=nums[i];
    }
    for(i=0;i<n;i++)
    {
        ans[i+n]=nums[i];
    }
    cout<<"\nConcatenated Vector"<<endl;
        for(i=0;i<2*n;i++)
        {
            cout<<ans[i]<<" ";
        }
    return 0;
}