#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define vvec vector<vec>
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
    ll n, m, x;
    cin >> n;
    vec a, b;
    fl(0, n)
    {
        cin >> x;
        a.pb(x);
    }
    cin >> m;
    fl(0, m)
    {
        cin >> x;
        b.pb(x);
    }
    ll maxRatio = 0, count = 0;
    fl(0, n)
    {
        for (int j = 0; j < m; j++)
        {
            if (b[j] % a[i] == 0)
            {
                double t = b[j] / a[i];
                if (t > maxRatio)
                {
                    maxRatio = t;
                    count = 1;
                }
                else if (maxRatio == t)
                {
                    count++;
                }
            }
        }
    }
    cout << count;
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