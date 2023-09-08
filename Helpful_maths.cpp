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
    ll o = 0, t = 0, th = 0;
    for(auto it : s) {
        o += it == '1';
        t += it == '2';
        th += it == '3';
    }
    string ans;
    while(o--) {
        ans.push_back('1');
        ans.push_back('+');
    }
    while(t--) {
        ans.push_back('2');
        ans.push_back('+');
    }
    while(th--) {
        ans.push_back('3');
        ans.push_back('+');
    }
    ans.pop_back();
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