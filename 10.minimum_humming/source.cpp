#include <bits/stdc++.h>
using namespace std;

string f(int n){
    string res;
    for (int i = 31; i >= 0; i--){
        int k = n >> i;
        if (k & 1) res.push_back('1');
        else res.push_back('0');
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, i, j, c = 0;
    cin >> n;
    vector<int> v(n);
    for (auto &temp : v) cin >> temp;
        
    vector<string> Bin;

    for (i = 0; i < n; i++){
        string temp = f(v[i]);
        Bin.push_back(temp);
    }
    int ans = 0;

    for (i = 31; i >= 0; i--){
        int one = 0;
        for (j = 0; j < n; j++){
            if (Bin[j][i] == '1'){
                one++;
            }
        }
        ans += (one * (n - one));
    }

    cout << ans << "\n";
    return 0;
}