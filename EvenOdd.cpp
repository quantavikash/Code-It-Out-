
// PROBLEM NAME ------>>>  Even Odds
// PROBLEM LINK ------>>>  https://codeforces.com/problemset/problem/318/A

#include <bits/stdc++.h>
#define lli long long int 



using namespace std;

void solve()
{
    lli n,k,mid,num;
    cin>>n>>k;
    mid  = ceil((double)n/2.0);
    if(k<=mid)
    {
        num = 1 + 2*(k-1);
        
    }
    else
    {
        k -= mid;
        num = 2 + 2*(k-1);
    }
    cout<<num;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
