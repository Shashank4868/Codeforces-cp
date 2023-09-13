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
    ll sum = 0, fC = 0, zC = 0, x;
    fl(0, n)
    {
        cin >> x;
        sum += x;
        fC += x == 5;
        zC += x == 0;
    }
    if (zC == 0)
    {
        cout << "-1";
    }
    else if (fC / 9 == 0)
    {
        cout << "0";
    }
    else
    {
        string s;
        fl(0, fC / 9)
        {
            fl(0, 9)
                s.pb('5');
        }
        fl(0, zC)
        {
            s.pb('0');
        }
        cout << s;
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