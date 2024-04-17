#include <bits/stdc++.h>
#pragma GCC target("popcnt")
using namespace std;
bitset<3001> B[3001];
int main()
{
    int n, i, j, c = 0;
    cin >> n;
    for (i = 0; i < n; i++) cin >> B[i];
    long long ans = 0;

    for (int i = 0; i < n - 1; i++){
        for (j = i + 1; j < n; j++){
            int x = (B[i] & B[j]).count();
            ans += (((x) * (x - 1)));
        }
    }

    cout << ans / 2 << "\n";
    return 0;
}

