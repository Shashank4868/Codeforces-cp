#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define pb push_back
#define fl(i,n) for(ll j = i;j < n ; j++)

void fast_io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve() {
    int x;
    for(int i = 0; i <5; i++) {
        for(int j = 0; j < 5; j++) {
            cin>>x;
            if(x == 1) {
                cout<<abs(i-2)+abs(j-2)<<endl;
                return;
            }
        }
    }
}

int main(){
    fast_io();
    ll test_cases = 1;
    while (test_cases--)
    {
        solve();
    }
    
    return 0;
}