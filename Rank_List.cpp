#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define vvec vector<vec>
#define pp pair<ll, ll>
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

void fileInput()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

static bool greaters(pp &a, pp &b)
{
    if (a.first == b.first)
        return a.second < b.second;
    return a.first > b.first;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pp> v;
    fl(0, n)
    {
        ll a, b;
        cin >> a >> b;
        v.pb({a, b});
    }
    sort(v.begin(), v.end(), greaters);
    auto t = v[k - 1];
    ll count = 0;
    for (auto it : v)
    {
        count += it == t;
    }
    cout << count;
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