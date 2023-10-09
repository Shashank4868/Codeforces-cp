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

void fileInput()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n >= m)
    {
        string s(n + m, 'B');
        for (size_t i = 1; i < m * 2; i += 2)
            s[i] = 'G';
        cout << s << endl;
    }
    else
    {
        string s(n + m, 'G');
        for (size_t i = 1; i < n * 2; i += 2)
            s[i] = 'B';
        cout << s << endl;
    }
}

int main()
{
    fast_io();
    fileInput();
    ll test_cases = 1;
    // cin >> test_cases;
    while (test_cases--)
    {
        solve();
    }

    return 0;
}