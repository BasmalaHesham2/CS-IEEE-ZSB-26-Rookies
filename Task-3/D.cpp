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
bool can(int n, int t, const vi &v, int mid)
{
    int tot = 0;
    for (int i = 0; i < n; i++)
    {
        tot += mid / v[i];
        if (tot >= t)
            return true;
    }
    return tot >= t;
}
int32_t main(){
    fastIO();
    int n, t;
    cin >> n >> t;
    vi v(n);
    cin >> v;
    sort(all(v));
    int l = 1, r = 1e18;

    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (can(n, t, v, mid))
            r = mid;
        else
            l = mid + 1;
    }
    cout << l << endl;
    return 0;
}