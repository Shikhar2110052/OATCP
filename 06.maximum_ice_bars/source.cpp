#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto &temp:v) cin >> temp;
    int coins; cin >> coins;
    sort(v.begin(), v.end(), [](int a, int b) {return (a < b);});
    int ans{};
    for(int i{};i<n;i++){
        if(coins >= v[i]){
            ans++;
            coins -= v[i];
        }
    }
    cout << ans << "\n";
    return 0;
}