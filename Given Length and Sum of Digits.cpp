// PROBLEM NAME ------>>> Given Length and Sum of Digits
// PROBLEM LINK ------>>>  https://codeforces.com/problemset/problem/489/C

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


using namespace std;

void solve()
{
    ll m,s,x,sl;
    cin>>m>>s;
    ll small[m] = {0}, large[m] = {0};
    sl = s;
    if(s == 0 && m>1)
    {
        cout<<"-1 -1\n";
        return ;
    }
    if(s>9*m)
    {
        cout<<"-1 -1\n";
        return ;
    }
    small[0] = 1;       s--;
    for(ll i = m-1;i>=0;i--)
    {
        x = min(s,(ll)9);
        small[i] += x;
        s -= x;
        if(s==0)
            break;
        
    }
    
    for(ll i = 0;i<m;i++)
    {
        x = min(sl,(ll)9);
        large[i] += x;
        sl -= x;
        if(sl == 0)
            break;
    }
    
    for(int i = 0;i<m;i++)
    {
        cout<<small[i];
        
    }
    cout<<" ";
    for(int i = 0;i<m;i++)
            cout<<large[i];
    cout<<"\n";
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
