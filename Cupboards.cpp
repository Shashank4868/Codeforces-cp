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
    ll n;
    cin>>n;
    ll left = 0, right = 0;
    fl(0,n) {
        ll l, r;
        cin>>l>>r;
        left += l;
        right += r;
    }
    ll ans = 0;
    ans += min(left, n-left);
    ans += min(right, n-right);
    cout<<ans;
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