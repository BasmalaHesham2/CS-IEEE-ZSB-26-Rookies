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
    int n, t;
    cin >> n >> t;
    vi v(n);
    cin >> v;

    int r = 0, ans = 0, sm = 0;
    ;

    for (int i = 0; i < n; i++)
    {
        while (r < n && sm + v[r] <= t)
        {
            sm += v[r];
            r++;
        }
        ans = max(ans, r - i);
        sm -= v[i];
    }
    cout << ans;

    return 0;
}