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

void solve()
{
    ll n;
    cin >> n;
    ll odda = 0, oddb = 0;
    ll sa = 0, sb = 0;
    bool s(false);
    fl(0, n)
    {
        ll x, y;
        cin >> x >> y;
        odda += x % 2;
        oddb += y % 2;
        sa += x;
        sb += y;
        if (x % 2 + y % 2 == 1)
            s = true;
    }
    if (sa % 2 == 0 and sb % 2 == 0)
    {
        cout << 0;
        return;
    }
    if (odda % 2 == 1 and oddb % 2 == 1 and s)
    {
        cout << 1;
    }
    else
        cout << -1;
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