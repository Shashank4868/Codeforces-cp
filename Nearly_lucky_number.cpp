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
    ll count = 0;
    while(n) {
        count += (n%10 == 7 or n%10 == 4);
        n/=10;
    }
    if(count == 7 or count == 4)
    cout<<"YES";
    else cout<<"NO";
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