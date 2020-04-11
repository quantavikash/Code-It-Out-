#include <bits/stdc++.h>
#define lli long long int 
 
 
 
using namespace std;
 
void solve()
{
    int t,n,i,j,ans;
    
    double x,sum;
    cin>>t;
    while(t--)
    {
        sum = 0;
        ans = 0;
        cin>>n>>x;
        double a[n];
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
       j = n;
       ans = 0;
       for(int i = n-1;i>=0;i--)
       {
           if(a[i]>=x)
            {
                j--;
                ans ++;
            }
       }
       i = j-1;
       if(j == n || j == 0)
       {
           
       }
       else
       {
           sum = a[i]+a[j];
       }
       while(i>=0 && j<n)
       {
            //sum = a[i]
            if(sum/((j-i+1)* 1.0) >= x)
            {
                i--;
                ans++;
                if(i>=0)
                {
                    sum += a[i];
                }
            }
            else
            {
                j++;
                if(j<n)
                {
                    sum += a[j];
                }
                
            }
       }
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
