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
    vec v(n + 1);
    fl(0, n)
    {
        cin >> v[i];
    }
    v[n] = v[0];
    ll x, y, ans = INT_MAX;
    fl(0, n + 1)
    {
        ll t = abs(v[i] - v[i + 1]);
        if (ans > t)
        {
            ans = t;
            x = i;
            y = i + 1;
            ;
        }
    }
    cout << x % n + 1 << " " << y % n + 1;
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