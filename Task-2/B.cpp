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
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vi v(n + 1);

        for (int i = 1; i < n + 1; i++)
            cin >> v[i];
        partial_sum(v.begin(), v.end(), v.begin());

        int last = v[n];
        while (q--)
        {
            int l, r, c;
            cin >> l >> r >> c;
            int sum = last - (v[r] - v[l - 1]);
            sum += (c * (l - r + 1));
            if (sum % 2)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}