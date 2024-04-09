#include <bits/stdc++.h>
using namespace std;

string removeKdigits(string num, int k) {
    int m = num.size();
    int n = m;
    stack<int> pq;
    int i{};
    while(i < n){
        if(pq.empty()){
            pq.push(num[i]);
        }else if(pq.top() > num[i] && k){
            while(!pq.empty() && pq.top() > num[i] && k){
                pq.pop(); k--;
            }
            pq.push(num[i]);
        }else{
            pq.push(num[i]);
        }
        i++;
    }
    while(!pq.empty() && k--) pq.pop();
    string ans;
    while(!pq.empty()) {
        ans += pq.top();
        pq.pop();
    }
    reverse(ans.begin(),ans.end());
    int j{};
    while(ans[j] == '0') j++;
    return ans.substr(j,ans.size()-j) == "" ? "0" : ans.substr(j,ans.size()-j);
}

int main()
{
    string num; cin >> num;
    int k; cin >> k;
    cout << removeKdigits(num, k) << "\n";
    return 0;
}