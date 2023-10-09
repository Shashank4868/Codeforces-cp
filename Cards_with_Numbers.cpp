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
    ump<int, vec> hash;
    fl(1, 2 * n + 1)
    {
        ll x;
        cin >> x;
        hash[x].pb(i);
    }
    for (auto &it : hash)
    {
        if (it.second.size() % 2)
        {
            cout << "-1";
            return;
        }
    }
    for (auto it : hash)
    {
        vec &v = it.second;
        for (ll i = 0; i < v.size(); i += 2)
        {
            cout << v[i] << " " << v[i + 1] << endl;
        }
    }
}

int main()
{
    fast_io();
    fileInput();
    ll test_cases = 1;
    // cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }

    return 0;
}