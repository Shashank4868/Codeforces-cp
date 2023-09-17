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
    string s;
    cin >> s;
    int i = 0;
    string ans;
    while (i < s.length())
    {
        if (s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B')
        {
            i += 3;
            if (!ans.empty())
                ans.pb(' ');
        }
        else
        {
            ans.pb(s[i++]);
        }
    }
    cout << ans;
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