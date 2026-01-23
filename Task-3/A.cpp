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
bool can(int mid, int n, int k)
{
    int tot = 0;
    int curr = mid;
    while (curr > 0)
    {
        tot += curr;
        curr /= k;
        if (tot >= n)
            return true;
    }
    return tot>=n;
}
int32_t main()
{
    fastIO();
    int n, k;
    cin >> n >> k;
    int l = 1, r = n;
    while (l < r)
    {
        int mid = l + (r - l) / 2;
        if (can(mid, n, k))
            r = mid;
        else
            l = mid + 1;
    }
    cout << l;
    return 0;
}