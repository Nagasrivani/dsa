#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        v.push_back(t);
    }
    int final_max_ans = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int temp_ans = 0;
            for(int k=i;k<=j;k++)
            {
                temp_ans += v[k];
            }
            if(final_max_ans < temp_ans)
            {
                final_max_ans = temp_ans;
            }
        }
    }
    cout<<final_max_ans;
    return 0;
}