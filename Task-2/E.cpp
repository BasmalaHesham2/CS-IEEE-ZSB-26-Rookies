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
    int n;
    cin >> n;
    vi v(n + 1);
    for (int i = 1; i < n + 1; i++)
        cin >> v[i];
    vi pre(n + 2);
    vi suff(n + 2);
    for (int i = 1; i < n + 1; i++){
        pre[i] = __gcd(v[i], pre[i - 1]);
    }
    for (int i = n; i >= 1; i--){
        suff[i] = __gcd(v[i], suff[i + 1]);
    }
    int ans = 0;

    // remove v[i] gcd(pre[i-1],suff[i+1])

    for (int i = 1; i < n + 1; i++)
    {
        int g = __gcd(pre[i - 1], suff[i + 1]);
        ans = max(g, ans);
    }
    cout << ans;
    return 0;
}