// PROBLEM NAME ------>>> Almost All Divisors
// PROBLEM LINK ------>>>  https://codeforces.com/contest/1165/problem/D

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
    ll n,x;
    TC
    {
        ll arr[1000000 + 1];
        memset(arr,0,sizeof(arr));
        cin>>n;
        vll d(n);
        for(auto &i : d)        cin>>i;
        
        sort(d.begin(),d.end());
        
        for(int i = 0;i<n;i++)
        {
            arr[d[i]] ++;
        }
        
        ll i = 0,j = n-1;
        x = d[i]*d[j];
        i++;        j--;
        bool flag  = 1;
        while(i<=j)
        {
            if(d[i]*d[j] != x)
            {
                flag = 0;
                break;
            }
            i++;
            j--;
        }
        if(flag)
        {
            for(ll i = 2;i*i <= x;i++)
            {
                if(x%i == 0)
                {
                    if(arr[i] == 0 ||arr[x/i] == 0)
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        
        if(flag)
            cout<<x<<"\n";
        else
            cout<<"-1\n";
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
