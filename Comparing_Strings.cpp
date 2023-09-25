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
    string a, b;
    getline(cin, a);
    getline(cin, b);
    if (a.size() != b.size())
    {
        cout << "NO";
    }
    else
    {
        ll k = 0, p = 0;
        char c, x;
        fl(0, a.size())
        {
            if (a[i] != b[i])
            {
                k++;

                if (k == 1)
                {
                    c = a[i], x = b[i];
                }
                else if (k == 2)
                {
                    if (a[i] == x and b[i] == c)
                    {
                        p = 1;
                    }
                }
                else
                    break;
            }
        }

        if (p == 1 and k == 2)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
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