#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define pb push_back
#define fl(j,n) for(ll i = j;i < n ; i++)

vector<vec> dir = {{1,0}, {-1,0}, {0,1}, {0,-1}};

void fast_io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    ll n, x;
    cin>>n;
    unordered_map<int, int> hash;
    fl(0, n) {
        cin>>x;
        hash[x] = i+1;
    }
    ll m;
    cin>>m;
    ll lc = 0, rc = 0;
    fl(0, m) {
        cin>>x;
        lc += hash[x], rc += n-hash[x]+1;
    }
    cout<<lc<<" "<<rc;
}

int main(){
    fast_io();
    ll test_cases = 1;
    // cin>>test_cases;
    while (test_cases--)
    {
        solve();
    }
    
    return 0;
}