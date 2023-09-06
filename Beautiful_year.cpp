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
    int yr;
    cin>>yr;
    while(++yr) {
        string s = to_string(yr);
        bool x = true;
        unordered_map<char, int> hash;
        for(auto it : s) {
            hash[it]++;
            if(hash[it] > 1) {
                x = false;
                break;
            }
        }
        if(x) {
            cout<<yr;
            break;
        }
    }
}

int main(){
    fast_io();
    ll test_cases = 1;;
    // cin>>test_cases;
    while (test_cases--)
    {
        solve();
    }
    
    return 0;
}