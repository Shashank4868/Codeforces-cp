#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define vvec vector<vec>
#define pp pair<ll, ll>
#define ump unordered_map
#define uset unordered_set
#define prq priority_queue
#define pb push_back
#define sortv(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>)
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
    vector<string> v(4);
    fl(0, 4) cin >> v[i];
    fl(0, 3)
    {
        for (ll j = 0; j < 3; j++)
        {
            ll cnt = 0;
            cnt += v[i][j] == '#';
            cnt += v[i + 1][j] == '#';
            cnt += v[i][j + 1] == '#';
            cnt += v[i + 1][j + 1] == '#';
            if (cnt != 2)
            {
                cout << "YES";
                return;
            }
        }
    }
    cout << "NO";
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