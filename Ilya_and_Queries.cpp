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

ll n, i, m, t;

void solve()
{
    string s;
    cin >> s;
    vec v;
    v.pb(0);
    fl(i, s.length() - 1)
    {
        v.pb(s[i] == s[i + 1]);
    }
    vec x;
    x.pb(v[0]);
    for (ll i = 1; i < v.size(); i++)
        x.pb(v[i] + x[i - 1]);
    cin >> m;
    while (m--)
    {
        cin >> t >> n;
        cout << x[n - 1] - x[t - 1] << endl;
    }
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