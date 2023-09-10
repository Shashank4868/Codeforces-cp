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
    ll sum = 0;
    fl(0, n)
    {
        ll x;
        cin >> x;
        sum += x;
    }
    ll count = 0;
    fl(1, 6)
    {
        if ((sum + i) % (n + 1) != 1)
            count++;
    }
    cout << count;
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