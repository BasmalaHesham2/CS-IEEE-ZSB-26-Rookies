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
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vi v(n);
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        bool can = true;
        for (auto &i : mp)
        {
            if (i.second % k != 0)
            {
                can = false;
                break;
            }
        }
        if (!can)
        {
            cout << 0 << endl;
            continue;
        }

        map<int, int> allowed;
        for (auto &i : mp)
        {
            allowed[i.first] = i.second / k;
        }

        int r = 0, ans = 0;
        map<int, int> inwin;
        for (int i = 0; i < n; i++)
        {
            while (r < n && inwin[v[r]] + 1 <= allowed[v[r]])
            {
                inwin[v[r]]++;
                r++;
                ans += (r - i);
            }
            inwin[v[i]]--;
        }
        cout << ans << endl;
    }
    return 0;
}