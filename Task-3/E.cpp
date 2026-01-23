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
    int n, m;
    cin >> n >> m;
    vi city(n);
    cin >> city;
    vi tower(m);
    cin >> tower;
    vi dist(n);
    for (int i = 0; i < n; i++)
    {
        auto it = lower_bound(all(tower), city[i]);
        int d1 = INT_MAX, d2 = INT_MAX;
        if (it != tower.end())
        {
            d2 = abs(city[i] - *it);
        }
        it--;
        if (it != tower.begin() - 1)
        {
            d1 = abs(city[i] - *it);
        }
        dist[i] = min(d1, d2);
    }
    int ans = *max_element(all(dist));
    cout << ans;
    return 0;
}