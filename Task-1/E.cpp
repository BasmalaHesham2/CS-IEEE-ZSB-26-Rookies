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
    int n,x;cin>>n>>x;
    vi v(n);
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int num;cin>>num;
        if(mp.count(x-num)){
            cout<<mp[x-num]<<" "<<i+1<<endl;
            return 0;
        }
        mp[num] = i+1;
    }

    cout<<"IMPOSSIBLE\n";

    return 0;
    
}