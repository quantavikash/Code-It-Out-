// PROBLEM NAME ------>>> ABA12C_Buying_Apples
// PROBLEM LINK ------>>>  https://www.spoj.com/problems/ABA12C/

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


vll price(101);
ll dp[101];


ll dps(ll k)
{
    if(k == 0)
        return dp[0];
    if(k == 1)
        return dp[1] = price[k-1];
    if(dp[k])
        return dp[k];
    ll temp = price[k-1];
    ll a,b;
    for(ll i= 1;i<= k/2;i++)
    {
        a = dps(i);
        b = dps(k-i);
        if(a == -1 || b == -1)
        {
            //return dp[k] = price[k-1];
            ;
        }
        else
        {
            temp = min(a+b,temp);
        }
    }
    return dp[k] = temp;
}

void solve()
{
    ll n,k,ans;
    TC
    {
       cin>>n>>k;
       for(int i =  0;i<k;i++)
            cin>>price[i];
        memset(dp,0,sizeof(dp));
        ans = dps(k);
        cout<<ans<<"\n";
        
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
