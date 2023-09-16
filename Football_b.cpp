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
    ll i = 0, j = 0;
    ll o = 0, z = 0;
    while (j < s.length() and j < 7)
    {
        o += s[j] == '1';
        z += s[j] == '0';
        j++;
    }
    while (j < s.length())
    {
        if (o >= 7 or z >= 7)
        {
            cout << "YES";
            return;
        }
        s[i++] == '0' ? z-- : o--;
        s[j] == '1' ? o++ : z++;
        j++;
    }
    z >= 7 or o >= 7 ? cout << "YES" : cout << "NO";
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