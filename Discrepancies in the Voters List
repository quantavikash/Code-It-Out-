// PROBLEM NAME ------>>> Discrepancies in the Voters List
// PROBLEM LINK ------>>>  https://www.codechef.com/problems/VOTERS

//---------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
#define ll long long int 
#define pb push_back
#define pf push_front
#define ppb pop_back
#define ppf pop_front
#define TC ll t;cin>>t; while(t--)
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


using namespace std;

void solve()
{
    ll n[3],x;
    cin>>n[0]>>n[1]>>n[2];
    ll arr[1000000];
    memset(arr,0,sizeof(arr));
    for(ll i = 0;i<3;i++)
    {
        for(ll j = 0;j<n[i];j++)
        {
            cin>>x;
            arr[x] ++;
        }
    }
    vll v;
    for(ll i=  0;i<1000000;i++)
    {
        if(arr[i]>=2)
            v.pb(i);
            
    }
    cout<<v.size()<<"\n";
    for(ll i = 0;i<v.size();i++)
        cout<<v[i]<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
