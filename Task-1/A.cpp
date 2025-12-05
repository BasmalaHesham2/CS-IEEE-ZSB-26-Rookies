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
    int x,n,q;cin>>x>>n;
    vi v(n+1);
    for(int i=1;i<n+1;i++) cin>>v[i];
    cin>>q;
    map <int,int> part;
    while(q--){
        int p;cin>>p;
        if(part[p]==0){
            x+=v[p];
            part[p]++;
        }
        else{
            x-=v[p];
            part[p]--;
        }
        cout<<x<<endl;
    }
    return 0;
}