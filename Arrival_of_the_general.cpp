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
    vec v(n);
    ll mini = INT_MAX, minInd = 0, maxi = INT_MIN, maxInd;
    fl(0, n) {
        cin>>v[i];
        if(v[i] <= mini) {
            mini = v[i];
            minInd = i;
        }
        if(maxi < v[i]) {
            maxi = v[i];
            maxInd = i;
        }
    }
    (maxInd < minInd) ? cout<<(maxInd + (n-minInd-1)) : cout<<(maxInd + (n-minInd) - 2);
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