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
        int n;
        cin >> n;
        vi v(n);
        cin >> v;
        int i = 0, j = n - 1, tot = 0;
        int toti = v[0], totj = v[n - 1];
        while (i < j)
        {
            while (totj < toti && i < j)
            {
                j--;
                totj += v[j];
            }
            while (toti < totj && i < j)
            {
                i++;
                toti += v[i];
            }
            if (toti == totj)
            {
                tot = i + (n - j) + 1;
            }
            if (i < j && toti == totj)
            {
                i++;
                j--;
                toti += v[i];
                totj += v[j];
            }
        }
        cout << tot << endl;
    }
    return 0;
}