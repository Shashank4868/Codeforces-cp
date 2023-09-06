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
    string s;
    cin>>s;
    int l = 0, u = 0;
    for(auto& it : s) {
        if(it <= 'z' and it >= 'a') l++;
        else u++;
    }
    if(u > l) {
        for(auto& it : s) {
            if(it <= 'z' and it >= 'a') {
                it = it-32;
            }
        }
    } else {
        for(auto& it : s) {
            if(it <= 'Z' and it >= 'A') {
                it = it+32;
            }
        }
    }
    cout<<s;
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