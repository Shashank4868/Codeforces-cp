#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define pb push_back
#define fl(j, n) for (ll i = j; i < n; i++)

vector<vec> dir = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

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
    double x;
    ll maxi = 0, ans = n;
    fl(0, n)
    {
        cin >> x;
        if (ceil(x / m) >= maxi)
        {
            maxi = ceil(x / m);
            ans = i + 1;
        }
    }
    cout << ans;
}

int main()
{
    fast_io();
    ll test_cases = 1;
    // cin>>test_cases;
    while (test_cases--)
    {
        solve();
    }

    return 0;
}