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

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    sort(s.begin(), s.begin() + n);
    sort(s.begin() + n, s.end());
    // cout << s;
    if (s[0] >= s[n])
    {
        fl(0, n)
        {
            // cout << s[i] << " " << s[i + n] << endl;
            if (s[i] - 48 <= s[i + n] - 48)
            {
                cout << "NO";
                return;
            }
        }
        cout << "YES";
    }
    else
    {
        fl(0, n)
        {
            // cout << s[i] << " " << s[i + n] << endl;
            if (s[i] - 48 >= s[i + n] - 48)
            {
                cout << "NO";
                return;
            }
        }
        cout << "YES";
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