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
    ll n;
    cin >> n;
    ll f = 0, t = 0;
    ll x;
    bool flag = false;
    fl(0, n)
    {
        cin >> x;
        if (x == 100 and f and t)
            f--, t--;
        else if (x == 100 and t >= 3)
            t -= 3;
        else if (x == 100)
            flag = true;
        if (x == 50 and t)
            t--, f++;
        else if (x == 50)
            flag = true;
        if (x == 25)
            t++;
    }
    flag ? cout << "NO" : cout << "YES";
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