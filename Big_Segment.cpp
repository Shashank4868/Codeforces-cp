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

void solve()
{
    ll n;
    cin >> n;
    ll x, y;
    ll mini = INT_MAX;
    ll maxi = INT_MIN;
    vector<pp> v;
    fl(0, n)
    {
        cin >> x >> y;
        v.pb({x, y});
        mini = min(x, mini);
        maxi = max(y, maxi);
    }
    fl(0, n)
    {
        if (v[i].first == mini and v[i].second == maxi)
        {
            cout << i + 1;
            return;
        }
    }
    cout << "-1";
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