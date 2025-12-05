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
    vi v(n);
    cin>>v;
    vi ans(n,0);
    stack<int> st;
    st.push(0);
    for(int i=1;i<n;i++){
        while(!st.empty()&&v[i]<=v[st.top()]){
            st.pop();
        }
        if(!st.empty()){
            ans[i]= st.top()+1;
        }
        st.push(i);
    }
    cout<<ans;
    return 0;
}