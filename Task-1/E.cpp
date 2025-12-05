#include <bits/stdc++.h>
using namespace std;
#define int long long
#define vi vector<int>
#define pii pair<int,int>
#define all(v) v.begin(), v.end()
#define endl "\n"

void fastIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int32_t main() {
    fastIO();
    int n, x;
    cin>>n>>x;
    vector<pii> a(n); 
    for(int i=0;i<n;i++) {
        cin>>a[i].first;
        a[i].second=i+1;
    }

    sort(all(a));
    int i=0,j=n-1;

    while(i<j) {
        int sum =a[i].first+a[j].first;
        if (sum==x) {
            cout<<a[i].second<<" "<<a[j].second;
            return 0;
        } else if(sum<x) {
            i++;
        } else {
            j--;
        }
    }

    cout << "IMPOSSIBLE";
    return 0;
}
