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
    string a, b;
    cin>>a>>b;
    fl(0, a.length()) {
        a[i] = tolower(a[i]), b[i] = tolower(b[i]);
        if(a[i] < b[i]) {
            cout<<"-1";
            return;
        }
        if(a[i] > b[i]) {
            cout<<"1";
            return;
        }
    }
    cout<<"0";
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