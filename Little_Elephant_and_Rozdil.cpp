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
    ll x, cnt(1);
    ll minTime(INT_MAX), minInd(0);
    fl(0, n)
    {
        cin >> x;
        if (x < minTime)
        {
            minTime = x;
            minInd = i + 1;
            cnt = 1;
        }
        else if (x == minTime)
        {
            cnt += 1;
        }
    }
    if (cnt == 1)
    {
        cout << minInd;
    }
    else
        cout << "Still Rozdil";
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