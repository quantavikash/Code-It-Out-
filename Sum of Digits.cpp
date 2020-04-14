/ PROBLEM NAME ------>>> Sum of Digits
// PROBLEM LINK ------>>>  https://codeforces.com/problemset/problem/102/B
 
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
    string n;
    cin>>n;
    ll sum = 0,sum2,cnt = 0;
    for(ll i = 0;i<n.length();i++)
    {
        sum += n[i] - '0';
    }
    if(n.length()>1)
        cnt++;
    while(sum >= 10)
    {
        cnt++;
        sum2 = 0;
        while(sum)
        {
            sum2 += sum%10;
            sum /= 10;
        }
        sum = sum2;
        
    }
    cout<<cnt<<"\n";
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
