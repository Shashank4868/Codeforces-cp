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
    // fast_io();
    // ll test_cases;
    // cin>>test_cases;
    // while (test_cases--)
    // {
        
    // }
    ll no;
    cin>>no;
    string s = to_string(no);
    no = 0;
    int x = 0;
    for(auto& i : s){
        if(!x){
            if(9-(i-48))
            no = no * 10 + ((i-48) > (9-(i-48)) ? (9-(i-48)) : (i-48));
            else
            no = no * 10 + (i-48);
            x++;
        }else{
        ll temp = i-48;
        no = no * 10 + ((i-48) > (9-(i-48)) ? (9-(i-48)) : (i-48));
        }
    }
    cout<<no;
    return 0;
}