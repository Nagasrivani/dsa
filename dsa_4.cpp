#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v2(n);
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            v2[i].push_back(1);//every row starts with 1
        }
        else
        {
            for(int j=0;j<(i+1);j++)
            {
                int value=0;
                if(j<v2[i-1].size())
                {
                    value += v2[i-1][j];
                }
                if(j-1>=0)
                {
                    value += v2[i-1][j-1];
                }
                v2[i].push_back(value);
            }
        }
    }
    cout<<"Printing the pascals triangle:\n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<v2[i].size();j++)
        {
            cout<<v2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}