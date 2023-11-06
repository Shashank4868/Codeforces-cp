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
    ll count = 0, t, ones = 0;
    vec v;
    fl(0, n)
    {
        cin >> t;
        ones += t;
        v.pb(t);
    }
    ll ans = 0;
    for (auto i : v)
    {
        if (!i)
        {
            count++;
        }
        else
            count--;
        ans = max(ans, count);
        if (count < 0)
            count = 0;
    }
    if (ones == n)
        cout << n - 1 << endl;
    else
        cout << ones + ans << endl;
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