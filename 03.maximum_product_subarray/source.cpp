#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &temp : v)
        cin >> temp;

    if (n == 0){
        cout << 0 << "\n";
        return 0;
    }
    int maxEndingHere = v[0];
    int minEndingHere = v[0];
    int maxSoFar = v[0];
    for (int i = 1; i < n; i++){
        if (v[i] < 0){
            swap(maxEndingHere, minEndingHere);
        }
        maxEndingHere = max(v[i], maxEndingHere * v[i]);
        minEndingHere = min(v[i], minEndingHere * v[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }
    cout << maxSoFar << "\n";

    return 0;
}