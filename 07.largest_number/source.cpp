#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    vector<string> v; 
    while(cin >> s){
        v.push_back(s);
    }

    sort(v.begin(), v.end(), [](string &s1, string &s2) {return (s1+s2 > s2+s1);});

    string ans = "";
    for(int i{};i<v.size();i++) ans += v[i];
    
    cout << ans << "\n";
    return 0;
}