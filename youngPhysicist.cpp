#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define pb push_back
#define floop(i,n) for(ll j = i;j < n ; j++)

void fast_io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fast_io();
    ll test_cases;
    ll a = 0, b = 0, c = 0;
    cin>>test_cases;
    while (test_cases--)
    {
        ll x, y, z;
        cin>>x>>y>>z;
        a += x, b += y, c += z;
    }
    a == 0 && b == 0 && c == 0?cout<<"YES\n":cout<<"NO\n";
    return 0;
}