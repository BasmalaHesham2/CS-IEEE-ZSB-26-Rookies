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
    string s;cin>>s;
    int count=1,maxn=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            count=1;
        }
        maxn=max(maxn,count);
    }
    cout<<maxn;
    return 0;
}