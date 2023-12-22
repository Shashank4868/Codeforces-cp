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

ll n, m, t;

void solve()
{
    cin >> n;
    vec v(n + 1);
    m = 0;
    ll c = 0, ans = 0;
    fl(i, n)
    {
        cin >> v[i + 1];
    }
    for (ll i = 1; i <= n; i++)
    {
        c = 0;
        m = v[i];
        while (m != -1)
        {
            m = v[m];
            c++;
        }
        ans = max(ans, c);
    }
    cout << ans + 1 << endl;
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