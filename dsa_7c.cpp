//reversing words in string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cout<<s;
    vector<string>v;
    string temp = "";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=' ')
        {
            temp.push_back(s[i]);
        }
        else 
        {
            v.push_back(temp);
            temp = "";
        }
    }
    if(temp!="")
    {
        v.push_back(temp);
    }
    int n = v.size();
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
