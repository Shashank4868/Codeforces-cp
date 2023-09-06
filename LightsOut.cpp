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
    vector<vector<int>> a(5, vector<int>(5, 0));
    fl(1, 4) {
        for(int j = 1; j < 4; j++) {
            int t;
            cin>>t;
            a[i][j] += t;
            a[i-1][j] += t;
            a[i+1][j] += t;
            a[i][j-1] += t;
            a[i][j+1] += t;
        }
    }
    fl(1,4) {
        for(int j = 1; j < 4; j++) {
            cout<<1-(a[i][j]%2);
        }
        cout<<endl;
    }
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