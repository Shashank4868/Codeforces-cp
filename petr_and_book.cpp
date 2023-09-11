#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define pb push_back
#define fl(j, n) for (ll i = j; i < n; i++)

vector<vec> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void solve()
{
    ll n;
    cin >> n;
    vec v;
    fl(0, 7)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    ll sm = 0, i = 0;
    for (i = 0; sm < n; i++)
    {
        sm += v[i % 7];
    }
    i % 7 == 0 ? cout << "7" : cout << i % 7;
}

int main()
{
    fast_io();
    ll test_cases = 1;
    // cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }

    return 0;
}