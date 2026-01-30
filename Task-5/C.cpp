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

bool getbit(int n,int i){
    if((n>>i)&1) return 1;
    else return 0;
}
int32_t main(){
    fastIO();
    int n;
    cin >> n;
    vi v(n);
    int tot = 0;
    for (int i = 0; i < n; i++)
        cin >> v[i], tot += v[i];
    int sum1 = 0, ans = LLONG_MAX, k = LLONG_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (getbit(i, j))
                sum1 += v[j];
        }
        k = abs(sum1 - (tot - sum1));
        ans = min(ans, k);
        sum1 = 0;
    }
    cout << ans;
    return 0;
}