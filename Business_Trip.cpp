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
    ll k;
    cin >> k;
    vec v(12);
    fl(0, 12)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    ll i = 0, sum(0);
    while (sum < k and i < 12)
    {
        sum += v[i++];
    }
    i >= 12 and sum < k ? cout << -1 : cout << i;
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