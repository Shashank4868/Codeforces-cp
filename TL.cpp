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
    ll m, n;
    cin >> m >> n;
    ll mini = INT_MAX, minii = INT_MIN, maxii = INT_MAX, a, b;
    fl(0, m)
    {
        cin >> a;
        minii = max(minii, a);
        mini = min(mini, a);
    }
    fl(0, n)
    {
        cin >> b;
        maxii = min(maxii, b);
    }
    fl(minii, maxii)
    {
        if (2 * mini <= i)
        {
            cout << i;
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