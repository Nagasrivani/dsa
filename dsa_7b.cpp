//reversing words in string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    // cout<<s;
    vector<string> v;
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
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    for(int i=n-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    return 0;
}
