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
    ll k;
    cin >> k;
    string s;
    cin >> s;
    ll count = 0;
    char ch;
    sort(s.begin(), s.end());
    fl(0, s.length())
    {
        if (i % k == 0)
        {
            ch = s[i];
        }
        count += ch == s[i];
    }
    if (count == s.length() and count % k == 0)
    {
        fl(0, k)
        {
            for (int j = 0; j < s.length(); j += k)
            {
                cout << s[j];
            }
        }
    }
    else
    {
        cout << "-1";
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