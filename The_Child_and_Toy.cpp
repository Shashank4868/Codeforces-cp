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
#define sortrev(v) sort(v.begin(), v.end(), greater<pp>())
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

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<pp> v;
    vec t;
    t.pb(0);
    fl(i, n)
    {
        ll x;
        cin >> x;
        v.pb({x, i + 1});
        t.pb(x);
    }
    sortrev(v);
    ump<ll, vec> h;
    fl(i, m)
    {
        ll a, b;
        cin >> a >> b;
        h[a].pb(b);
        h[b].pb(a);
    }
    uset<ll> deleted;
    ll ans = 0;
    for (auto it : v)
    {
        deleted.insert(it.second);
        // cout << it.second << " ";
        ll sum = 0;
        for (auto it : h[it.second])
        {
            if (deleted.find(it) == deleted.end())
            {
                sum += t[it];
            }
        }
        ans += sum;
    }
    // cout << endl;
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