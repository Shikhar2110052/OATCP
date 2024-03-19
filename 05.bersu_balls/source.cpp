#include <bits/stdc++.h>
using namespace std;

int recur(vector<int> &v1,vector<int> &v2,int n,int m,vector<vector<int>> &dp){
    if(n == 0 || m == 0){
        return 0;
    }
    if(dp[n][m] != -1){
        return dp[n][m];
    }else{
        if(abs(v1[n-1] - v2[m-1]) <= 1){
            dp[n][m] = max(1+recur(v1,v2,n-1,m-1,dp),max(recur(v1,v2,n,m-1,dp),recur(v1,v2,n-1,m,dp)));
        }else{
            dp[n][m] = max(recur(v1,v2,n-1,m,dp),recur(v1,v2,n,m-1,dp));
        }
        return dp[n][m];
    }
}

int main()
{
    int n; cin >> n;
    vector<int> boys(n);
    for(auto &temp:boys) cin >> temp;
    int m; cin >> m;
    vector<int> girls(m);
    for(auto &temp:girls) cin >> temp;

    vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
    int ans = recur(boys,girls,n,m,dp);

    cout << ans << "\n";
    return 0;
}