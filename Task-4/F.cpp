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
    int n, x;
    cin >> n >> x;
    vector<pii> v;
    for (int i = 1; i < n + 1; i++)
    {
        int j;
        cin >> j;
        v.push_back({j, i});
    }
    sort(all(v));
    bool f = true;
    int i = 0, j = n - 1, sm = 0;
    while (i < j)
    {
        sm = v[i].first + v[j].first;
        if (sm < x)
            i++;
        else if (sm > x)
            j--;
        else
        {
            cout << v[i].second << " " << v[j].second << endl;
            f = false;
            break;
        }
    }
    if (f)
        cout << "IMPOSSIBLE\n";

    return 0;
}