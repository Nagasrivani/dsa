#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,currentprice;
    cin>>n;
    vector<int>price;
    for(int i=0;i<n;i++)
    {
        cin>>currentprice;
        price.push_back(currentprice);
    }
    int answer=-1000000000;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(answer<price[j]-price[i])
            {
                answer=price[j]-price[i];
            }
        }
    }
    cout<<answer;
    return 0;
}