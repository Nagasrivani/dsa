#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n;
    vector<int>price;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        price.push_back(t);  
    }
    int max_value=-1000000000;
    int answer=-1000000000;
    for(int i=n-1;i>=0;i--)
    {
        if(answer<max_value-price[i])
        {
            answer=max_value-price[i];
        }
        if(max_value<price[i])
        {
            max_value=price[i];
        }
    }
    cout<<answer;
    return 0;
}