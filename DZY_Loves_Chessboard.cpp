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
    ll n, m;
    cin >> n >> m;
    vector<string> v;
    fl(0, n)
    {
        string s;
        cin >> s;
        v.pb(s);
    }
    char w = 'W', b = 'B';
    ll x = 0, t = 0;
    fl(0, n)
    {
        x = t % 2;
        for (int j = 0; j < m; j++)
        {
            v[i][j] == '-' ? cout << "-" : x % 2 == 0 ? cout << "W"
                                                      : cout << "B";
            x++;
        }
        cout << endl;
        t++;
    }
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