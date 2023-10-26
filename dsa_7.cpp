#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //cout<<s;
    vector<string>v;
    string temp=" ";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            temp.push_back(s[i]);
        }
        else
        {
            v.push_back(temp);//pushing s[i] into vector v
            temp=" ";
        }
    }
    if(temp!=" ")
    {
        v.push_back(temp);
    }
    /*for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }*/
    int n=v.size();
    vector<string>v2;
    for(int i=n-1;i>=0;i--)
    {
        v2.push_back(v[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<v2[i]<<" ";
    }
    return 0;
}