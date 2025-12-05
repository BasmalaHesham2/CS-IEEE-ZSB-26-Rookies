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
    int n;cin>>n;
    int num=(n*(n+1))/2;
    if(num%2) cout<<"NO\n";
    else{
        cout<<"YES\n";
        int half=num/2;
        set<int> s1,s2;
        for(int i=n;i>0;i--){
            if(i<=half){
                half-=i;
                s1.insert(i);
            }
            else{
                s2.insert(i);
            }
        }
        cout<<s1.size()<<endl;
        for(auto i:s1){
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<s2.size()<<endl;
        for(auto i:s2){
            cout<<i<<" ";
        }

    }
    return 0;
}