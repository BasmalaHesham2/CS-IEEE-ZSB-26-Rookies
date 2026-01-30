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
 int getbit(int n,int i){
    if(n>>i && 1) return 1;
    else return 0;
 }
int32_t main(){
    fastIO();
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int msba, msbb;
        msba = 31 - __builtin_clz(a);
        msbb = 31 - __builtin_clz(b);
        if (a == b)
        {
            cout << 0 << endl;
        }
        else if (msbb > msba)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << 2 << endl;
            int allones = (1 << msba + 1) - 1;
            cout << (a ^ allones) << " ";
            cout << (b ^ allones) << endl;
        }
    }
    return 0;
}