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
    int n;
    cin >> n;
    vi v(n);
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        x ^= v[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << (v[i] ^ x) << " ";
    }

    return 0;
}