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
    int n, k, q;
    cin >> n >> k >> q;
    vi ans(200000 + 5, 0);
    while (n--)
    {
        int l, r;
        cin >> l >> r;
        ans[l] += 1;
        ans[r + 1] -= 1;
    }
    partial_sum(all(ans), ans.begin());

    vi add(200000 + 5, 0);
    for (int i = 0; i < 200000 + 5; i++)
    {
        if (ans[i] >= k)
            add[i] = 1;
    }
    partial_sum(all(add), add.begin());
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        cout << add[r] - add[l - 1] << endl;
    }

    return 0;
}