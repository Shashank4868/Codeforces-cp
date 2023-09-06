#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vec vector<ll>
#define pb push_back
#define floop(i,n) for(ll j = i;j < n ; j++)

void fast_io(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    fast_io();
    ll test_cases;
    ll x = 0;
    cin>>test_cases;
    while (test_cases--)
    {
        string s;
        cin>>s;
        if(s == "X++" || s == "++X")
        x++;
        else x--;
    }
    cout<<x<<endl;
    return 0;
}