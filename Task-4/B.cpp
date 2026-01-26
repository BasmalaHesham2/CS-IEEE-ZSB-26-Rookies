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
    int i = 0, j = n - 1, a = 0, b = 0;
    int s1 = 0, s2 = 0;
    while (i <= j)
    {
        if (s1 <= s2)
        {
            s1 += v[i];
            i++;
            a++;
        }
        else
        {
            s2 += v[j];
            j--;
            b++;
        }
    }
    cout << a << " " << b;
    return 0;
}