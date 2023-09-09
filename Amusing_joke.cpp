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
    string a, b, c;
    cin>>a>>b>>c;
    unordered_map<char, int> hash1, hash2;
    for(auto& it : a) {
        hash1[it]++;
    }
    for(auto& it : b) {
        hash1[it]++;
    }
    for(auto& it : c) {
        hash2[it]++;
    }
    hash1 == hash2 ? cout<<"YES" : cout<<"NO";
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