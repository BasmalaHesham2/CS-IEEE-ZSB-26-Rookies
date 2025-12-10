#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define vi     vector<int>
#define pii    pair<int, int>
#define all(v)    v.begin(),v.end()
#define endl "\n"
template<typename T> ostream& operator<<(ostream& os, vector<T>& v){for (auto& i : v) os << i << ' ';return os;}
template<typename T> istream& operator>>(istream& is, vector<T>& v){for (auto& i : v) is >> i;return is;}
void fastIO(){
    ios_base::sync_with_stdio(false);

    cin.tie(0);
}
int32_t main(){
    fastIO();
    freopen("bcount.in", "r", stdin);
    freopen("bcount.out", "w", stdout);
    int n, q;
    cin >> n >> q;
    vi h(n + 1, 0);
    vi g(n + 1, 0);
    vi j(n + 1, 0);
    for (int i = 1; i < n + 1; i++)
    {
        int k;
        cin >> k;
        if (k == 1)
            h[i] = 1;
        else if (k == 2)
            g[i] = 1;
        else
            j[i] = 1;
    }
    partial_sum(all(h), h.begin());
    partial_sum(all(g), g.begin());
    partial_sum(all(j), j.begin());
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << h[r] - h[l - 1] << " " << g[r] - g[l - 1] << " " << j[r] - j[l - 1] << endl;
    }
    return 0;
}