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
    ll n;
    cin >> n;
    vec a, b;
    a.pb(0);
    b.pb(0);
    ll x;
    fl(1, n + 1)
    {
        cin >> x;
        a.pb(x + a[i - 1]); // 6 10 12 19 21 28
        b.pb(x);
    }
    sortv(b);
    fl(1, n + 1) b[i] += b[i - 1];
    ll m;
    cin >> m;
    fl(0, m)
    {
        ll t, l, r;
        cin >> t >> l >> r;
        if (t & 1)
        {
            cout << a[r] - a[l - 1] << endl;
        }
        else
        {
            cout << b[r] - b[l - 1] << endl;
        }
    }
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