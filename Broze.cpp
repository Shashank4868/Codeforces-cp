#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define pb push_back
#define fl(j,n) for(ll i = j;i < n ; i++)

void fast_io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    string s;
    cin>>s;
    string ans;
    fl(0, s.length()) {
        if(s[i] == '.') {
            ans.pb('0');
        } else {
            if(s[i+1] == '-') {
                ans.pb('2');
            } else {
                ans.pb('1');
            }
            i++;
        }
    }
    cout<<ans<<endl;
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