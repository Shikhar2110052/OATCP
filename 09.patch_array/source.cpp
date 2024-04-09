#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k; cin >> k;
    vector<int> v(k);
    for(auto &temp:v) cin >> temp;
    int n; cin >> n;
    long long sum = 0, cnt = 0, i = 0;
    while(sum < n){
        if(i<v.size() && v[i]<=sum+1){
            sum += v[i++];
        }else{
            cnt++;
            sum += sum+1;
        }
    }
    cout << cnt << "\n";
    return 0;
}