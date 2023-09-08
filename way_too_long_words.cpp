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
    if(s.length() <= 10) {
        cout<<s;
    } else {
        string ans;
        ans.push_back(s[0]);
        string temp = to_string(s.length()-2);
        ans+=temp;
        ans.push_back(s[s.length()-1]);
        cout<<ans;
    }
    cout<<endl;
}

int main(){
    fast_io();
    ll test_cases;
    cin>>test_cases;
    while (test_cases--)
    {
        solve();
    }
    
    return 0;
}