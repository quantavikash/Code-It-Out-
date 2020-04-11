#include <bits/stdc++.h>
#define lli long long int 
 
 
 
using namespace std;
 
void solve()
{
    lli t,n,flag;
    cin>>t;
    while(t--)
    {
        cin>>n;
        lli p[n],c[n];
        for(lli i = 0;i<n;i++)
        {
            cin>>p[i]>>c[i];
        }
        flag = 1;
        if(c[0]>p[0])
        {
            flag = 0;
        }
        else
        {
            //if(c[0])
            for(lli i = 1;i<n;i++)
            {
                if(p[i] >= p[i-1] && c[i]>= c[i-1] && c[i] <= p[i]&& p[i]-p[i-1] >= c[i]-c[i-1])
                    continue;
                else
                {
                    flag = 0;
                    break;
                }
            }
        }
        if(flag)
                cout<<"YES\n";
        else
            cout<<"NO\n";
        
    }
    
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
