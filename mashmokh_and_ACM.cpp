#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define vvec vector<vec>
#define pp pair<ll, ll>
#define ump unordered_map
#define uset unordered_set
#define prq priority_queue
#define pb push_back
#define sortv(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>)
#define fl(i, n) for (ll i = 0; i < n; i++)

const ll mod = 1e9 + 7;

vvec dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void fileInput()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

vec d[2010];
vvec dp(2001, vec(2001, -1));

ll f(ll n, ll k)
{
    if (k == 1)
        return 1;
    if (dp[n][k] != -1)
        return dp[n][k];
    ll ans = 0;
    for (int i = 0; i < d[n].size(); i++)
    {
        ans += f(d[n][i], k - 1);
        ans %= mod;
    }
    return dp[n][k] = ans;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    for (ll i = 1; i < 2010; i++)
    {
        for (ll j = i; j < 2010; j += i)
        {
            d[j].pb(i);
        }
    }
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ans += f(i, k);
        ans %= mod;
    }
    cout << ans << endl;
}

int main()
{
    fast_io();
    ll test_cases = 1;
    // fileInput();
    // cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }

    return 0;
}