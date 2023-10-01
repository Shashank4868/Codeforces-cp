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
    ll n, x;
    cin >> n;

    ump<ll, ll> hash;
    fl(0, n)
    {
        cin >> x;
        hash[x]++;
    }
    ll t = n & 1 ? n / 2 + 1 : n / 2;
    for (auto &it : hash)
    {
        if (it.second > t)
        {

            cout << "NO";
            return;
        }
    }
    cout << "YES";
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