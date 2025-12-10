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
    vi first(n + 1);
    vi second(n + 1);
    for (int i = 1; i < n + 1; i++)
    {
        cin >> first[i];
        second[i] = first[i];
    }
    sort(all(second));
    partial_sum(first.begin(), first.end(), first.begin());
    partial_sum(second.begin(), second.end(), second.begin());

    int q;
    cin >> q;
    while (q--)
    {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1)
        {
            cout << first[r] - first[l - 1] << endl;
        }
        else
        {
            cout << second[r] - second[l - 1] << endl;
        }
    }
    return 0;
}