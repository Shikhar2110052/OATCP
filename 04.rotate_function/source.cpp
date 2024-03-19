#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    vector<int> v(n);
    for(auto &temp:v) cin >> temp;

    int sum_of_product{}, sum{};
    for(int i{};i<n;i++){
        sum_of_product += v[i]*i;
        sum += v[i];
    }
    int ans = sum_of_product;
    for(int i{};i<n;i++){
        sum_of_product = sum_of_product + sum - v[n-i-1]*n;
        ans = max(ans, sum_of_product);
    }

    cout << ans << "\n";
    return 0;
}