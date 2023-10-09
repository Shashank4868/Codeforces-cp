#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define vvec vector<vec>
#define pp pair<ll, ll>
#define ump unordered_map
#define uset unordered_set
#define pb push_back
#define N 1010100
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

ll arr[N];

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    memset(arr, 0, sizeof(arr));

    ll m = a * b * c;
    for (ll i = 1; i <= m; i++)
    {
        for (ll j = i; j <= m; j += i)
        {
            arr[j]++;
        }
    }
    ll sum = 0;

    for (ll i = 1; i <= a; i++)
    {
        for (ll j = 1; j <= b; j++)
        {
            for (ll k = 1; k <= c; k++)
            {
                sum += arr[i * j * k];
                sum %= mod;
            }
        }
    }
    cout << sum;
}

int main()
{
    fast_io();
    // fileInput();
    ll test_cases = 1;
    // cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }

    return 0;
}