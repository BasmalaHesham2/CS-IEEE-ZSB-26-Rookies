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
    int n;
    cin >> n;
    vi v(n);
    cin >> v;
    sort(all(v));
    int q;
    cin >> q;
    while (q--)
    {
        int m;
        cin >> m;
        auto it = upper_bound(all(v), m);
        int k = *it;
        cout << it - v.begin() << endl;
    }
    return 0;
}