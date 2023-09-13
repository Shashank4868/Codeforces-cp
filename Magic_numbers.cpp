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
    string s = to_string(n);
    if (s[0] == '4')
    {
        cout << "NO";
        return;
    }
    fl(0, s.length())
    {
        if (s[i] != '1' and s[i] != '4')
        {
            cout << "NO";
            return;
        }
        if (s[i] == '4')
        {
            int j = i + 1, cnt = 1;
            while (j < s.length() and s[j] == '4')
            {
                cnt++;
                j++;
            }
            if (cnt > 2)
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
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