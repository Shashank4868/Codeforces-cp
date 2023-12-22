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
#define fl(i, n) for (ll i = 0; i < n; i++)

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

static bool cmp(pp &a, pp &b)
{
    if (a.first < b.first)
    {
        return true;
    }
    else if (a.first > b.first)
    {
        return false;
    }
    return a.second > b.second;
}

void solve()
{
    ll n;
    cin >> n;
    vector<pp> v;
    ll a, b;
    fl(i, n)
    {
        cin >> a >> b;
        v.pb({a, b});
    }
    sort(v.begin(), v.end(), cmp);
    for (ll i = 0; i < n - 1; i++)
    {
        if (v[i].first < v[i + 1].first and v[i].second > v[i + 1].second)
        {
            cout << "Happy Alex\n";
            return;
        }
    }
    cout << "Poor Alex\n";
}

int main()
{
    fast_io();
    ll test_cases = 1;
    // fileInput();
    // cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }

    return 0;
}