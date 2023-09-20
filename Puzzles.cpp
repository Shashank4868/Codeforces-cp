#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define vvec vector<vec>
#define ump unordered_map
#define uset unordered_set
#define pb push_back
#define fl(j, n) for (ll i = j; i < n; i++)

const ll mod = 1e9 + 7;

vvec dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

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
    ll m;
    cin >> m;
    vec v;
    fl(0, m)
    {
        ll x;
        cin >> x;
        v.pb(x);
    }
    sort(v.begin(), v.end());
    ll ans = v[n - 1] - v[0];
    fl(1, m - n + 1)
    {
        if (v[i + n - 1] - v[i] < ans)
        {
            ans = v[i + n - 1] - v[i];
        }
    }
    cout << ans;
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