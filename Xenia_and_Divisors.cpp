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
    ll n;
    cin >> n;
    vec count(8, 0);
    fl(0, n)
    {
        ll x;
        cin >> x;
        count[x] += 1;
    }
    if (count[5] == 0 && count[7] == 0 && count[2] >= count[4] && count[1] == count[4] + count[6] && count[2] + count[3] == count[4] + count[6])
    {
        for (int i = 0; i < count[4]; ++i)
        {
            printf("1 2 4\n");
        }
        count[2] -= count[4];
        for (int i = 0; i < count[2]; ++i)
        {
            printf("1 2 6\n");
        }
        for (int i = 0; i < count[3]; ++i)
        {
            printf("1 3 6\n");
        }
    }
    else
    {
        printf("-1\n");
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