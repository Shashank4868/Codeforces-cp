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
    ll n;
    cin >> n;
    vector<pair<ll, ll>> v;
    fl(0, n)
    {
        ll a, b;
        cin >> a >> b;
        v.push_back({a, b});
    }
    ll ans = 0;
    fl(0, n)
    {
        ll up = 0, dn = 0, lt = 0, rt = 0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                up += (v[i].second < v[j].second and v[i].first == v[j].first);
                dn += (v[i].second > v[j].second and v[i].first == v[j].first);
                lt += (v[i].first < v[j].first and v[i].second == v[j].second);
                rt += (v[i].first > v[j].first and v[i].second == v[j].second);
            }
        }
        if (up and dn and rt and lt)
        {
            ans++;
        }
    }
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