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
    vvec v(6);
    fl(0, 5)
    {
        for (int j = 0; j < 5; j++)
        {
            ll x;
            cin >> x;
            v[i].pb(x);
        }
    }
    vec p(5);
    ll ans = -1;
    fl(0, 5) p[i] = i;
    do
    {
        ll tmp = 0;
        // 01234
        tmp += v[p[0]][p[1]] + v[p[1]][p[0]];
        tmp += v[p[2]][p[3]] + v[p[3]][p[2]];

        // 1234
        tmp += v[p[1]][p[2]] + v[p[2]][p[1]];
        tmp += v[p[3]][p[4]] + v[p[4]][p[3]];

        // 234
        tmp += v[p[2]][p[3]] + v[p[3]][p[2]];

        // 34
        tmp += v[p[3]][p[4]] + v[p[4]][p[3]];

        if (tmp > ans)
        {
            ans = tmp;
        }
    } while (next_permutation(p.begin(), p.end()));
    cout << ans;
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