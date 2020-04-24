// PROBLEM NAME ------>>> Zonal Computing Olympiad
// PROBLEM LINK ------>>>  https://www.codechef.com/problems/ZCO14001

//---------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
#define ll long long int 
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define TC ll t;cin>>t; for(ll z = 1;z<=t;z++)
#define bs binary_search
#define pll pair<ll,ll>
#define ppll pair<ll,pll>
#define vvll vector<vector<ll>>
#define sll stack<ll>
#define qll queue<ll>
#define vll vector<ll>
#define vpll vector<pll>
#define vc vector <char>
#define f first
#define s second
#define MOD 10e9 + 7
#define mxn 10e18
#define ln "\n"

using namespace std;

void solve()
{
    ll n,h,q,ptr = 0;
    cin>>n>>h;
    vll v(n);
    for(auto &i : v)
            cin>>i;
    bool ld = 0;
    cin>>q;
    while(q)
    {
        switch(q)
        {
            case 1: if(ptr>0)
                        ptr -- ;
                    break;
            case 2: if(ptr<n-1)
                        ptr++;
                    break;
            case 3: if(ld == 0 && v[ptr] > 0)
                    {
                        v[ptr]--;
                        ld = 1;
                        
                    }
                    break;
            case 4: if(ld == 1 && v[ptr] < h)
                    {
                        v[ptr]++;
                        ld = 0;
                    }
                    break;
        }
        cin>>q;
    }
    for(auto &i : v)
            cout<<i<<" ";
    cout<<ln;
    
}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
