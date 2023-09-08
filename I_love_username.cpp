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
    ll amazing = 0;
    ll val;
    cin>>val;
    ll mini = val, maxi = val;
    fl(0,n-1) {
        ll x;
        cin>>x;
        if(mini > x) {
            mini = x;
            amazing++;
        }
        if(maxi < x) {
            maxi = x;
            amazing++;
        }
    }
    cout<<amazing;
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