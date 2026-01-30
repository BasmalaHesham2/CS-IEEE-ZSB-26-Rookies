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
const int MOD=1e9 +7;
int32_t main(){
    fastIO();
    int n, q;
    cin >> n >> q;
    vi v(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >> v[i];
    vi pre(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        pre[i] = (v[i] ^ pre[i - 1]);
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << (pre[r] ^ pre[l - 1]) << endl;
    }
    return 0;
}