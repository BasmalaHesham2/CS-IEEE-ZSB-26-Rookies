#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
#define all(v)    v.begin(),v.end()
#define rall(v)    v.rbegin(),v.rend()
#define endl "\n"
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}
void fastIO(){
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}
int32_t main(){
    fastIO();
    int n, m, k;
    cin >> n >> m >> k;
    vi head(n);

    vi body(m);
    multiset<int> bodyst;
    cin >> head;
    for (int i = 0; i < m; i++)
    {
        cin >> body[i];
        bodyst.insert(body[i]);
    }
    sort(all(body));
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        auto it = bodyst.lower_bound(head[i]);
        if (it == bodyst.end())
            continue;
        cnt++;
        bodyst.erase(it);
        if (cnt >= k)
            break;
    }
    if (cnt >= k)
        cout << "Yes";
    else
        cout << "No\n";
    return 0;
}