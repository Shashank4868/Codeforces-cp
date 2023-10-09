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
    int y, k, n;
    scanf("%d%d%d", &y, &k, &n);
    int x = k - y % k;
    int top = n - y;
    if (x <= top)
    {
        printf("%d", x);
        x += k;
        while (x <= top)
        {
            printf(" %d", x);
            x += k;
        }
        printf("\n");
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