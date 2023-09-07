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
    ll k, l, m, n;
    cin>>k>>l>>m>>n;
    ll d;
    cin>>d;
    ll count = d;
    if(k == 1 or l == 1 or m ==1 or n == 1) {
        cout<<d;
        return;
    }
    fl(1, d+1){
        if(i%k and i%l and i%m and i%n){
            count--;
        }
    }
    cout<<count;
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