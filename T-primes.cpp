#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define vvec vector<vec>
#define pp pair<ll, ll>
#define ump unordered_map
#define uset unordered_set
#define prq priority_queue
#define pb push_back
#define sortv(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>)
#define fl(j, n) for (ll i = j; i < n; i++)

const ll mod = 1e9 + 7;
const int sqrt_lim = 1000001;

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

set<long long> prime_squares()
{
    static bool arr[sqrt_lim];

    for (int i = 2; i * i < sqrt_lim; i++)
    {
        if (!arr[i])
        {
            for (int j = i * i; j < sqrt_lim; j += i)
            {
                arr[j] = true;
            }
        }
    }

    set<long long> res;
    for (int i = 2; i < sqrt_lim; i++)
    {
        if (!arr[i])
            res.insert((long long)i * i);
    }
    return res;
}

void solve()
{
    set<ll> isPrime(prime_squares());
    ll n;
    cin >> n;
    fl(0, n)
    {
        ll x;
        cin >> x;
        ll t = sqrt(x);
        if (isPrime.find(x) != isPrime.end())
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
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