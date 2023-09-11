#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define pb push_back
#define fl(j, n) for (ll i = j; i < n; i++)

const ll mod = 1e9 + 7;

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
    ll ans = ((((n * (n + 1)) % mod) * (4 * n - 1)) % mod * 337) % mod;
    cout << ans << endl;
}

int main()
{
    fast_io();
    ll test_cases;
    cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }

    return 0;
}