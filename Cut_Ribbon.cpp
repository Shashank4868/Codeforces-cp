#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define vvec vector<vec>
#define pp pair<ll, ll>
#define ump unordered_map
#define uset unordered_set
#define pb push_back
#define sortv(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>)
#define fl(j, n) for (ll i = j; i < n; i++)

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

void solve()
{
    ll n, a, b, c, ans = 0;
    cin >> n >> a >> b >> c;
    for (ll i = 0; i * a <= n; i++)
    {
        for (ll j = 0; j * b + i * a <= n; j++)
        {
            ll k = (n - (a * i + b * j));
            if (k % c == 0)
            {
                ans = max(ans, i + j + k / c);
            }
        }
    }
    cout << ans;
}

int main()
{
    fast_io();
    // fileInput();
    ll test_cases = 1;
    // cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }

    return 0;
}