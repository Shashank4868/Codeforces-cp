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
    ll n, m;
    cin >> n >> m;
    ll x, last;
    ll ans = 0;
    fl(0, m)
    {
        cin >> x;
        if (i == 0)
        {
            ans += x - 1;
        }
        else
        {
            if (last > x)
            {
                ans += n - last + x;
            }
            else
            {
                ans += x - last;
            }
        }
        last = x;
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