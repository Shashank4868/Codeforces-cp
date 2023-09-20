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
    vec v(n);
    fl(0, n)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    ll a = 1, b = 1;
    if (v[0] == v[n - 1])
        cout << v[n - 1] - v[0] << " " << (n - 1) * n / 2 << endl;
    else
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (v[j] == v[n - 1])
                a++;
            else if (v[j] == v[0])
                b++;
        }
        cout << v[n - 1] - v[0] << " " << a * b << endl;
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