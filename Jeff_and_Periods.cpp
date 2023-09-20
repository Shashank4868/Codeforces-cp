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
    ll n;
    cin >> n;
    map<ll, vec> hash;
    fl(0, n)
    {
        ll x;
        cin >> x;
        hash[x].pb(i);
    }
    ll x = 0;
    vector<pair<int, int>> ans;
    for (auto it : hash)
    {
        ll t = it.first;
        vec &v = it.second;
        if (v.size() == 1)
        {
            ans.pb({t, 0});
            x++;
        }
        else
        {
            ll diff = v[1] - v[0];
            bool flag = 1;
            fl(2, v.size())
            {
                if (v[i] - v[i - 1] != diff)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                ans.pb({t, diff});
                x++;
            }
        }
    }
    cout << x << endl;
    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
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