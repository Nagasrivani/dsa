#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int > nums;
    int n;
    cin>>n;
    int element;
    for(int i=0;i<n;i++){
        cin>>element;
        nums.push_back(element);
    }
    int ans = 0;
    map<int, int >mapnums;
    for(int i=0;i<n;i++){
        ans += mapnums[nums[i]];
        mapnums[nums[i]]++;
    }
    cout<<ans;
    return 0;
}