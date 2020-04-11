// PROBLEM NAME ------>>>  Increasing Subsequence (easy version)
// PROBLEM LINK ------>>>  https://codeforces.com/contest/1157/problem/C1

//---------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
#define lli long long int 
#define pb push_back


using namespace std;

void solve()
{
    lli n;
    cin>>n;
    lli a[n];
    for(lli i  =0;i<n;i++)
    {
        cin>>a[i];
    }
    lli i = 0,j=n-1;
    //char ch[n];
    string s;
    stack <int>st;
    while(i<=j)
    {
        if(st.empty())
        {
            if(a[i]<=a[j])
            {
                st.push(a[i]);
                s.pb('L')   ;
                i++;
            }
            else
            {
                st.push(a[j]);
                s.pb('R');
                j--;
            }
        }
        
        else if(a[i]>st.top())
        {
            if(a[j]>st.top())
            {
                if(a[i] <= a[j])
                {
                    st.push(a[i]);
                    s.pb('L');
                    i++;
                }
                else
                {
                    st.push(a[j]);
                    s.pb('R');
                    j--;
                }
            }
            else
            {
                st.push(a[i]);
                    s.pb('L');
                    i++;
            }
        }
        else if(a[j]>st.top())
        {
            st.push(a[j]);
            s.pb('R');
            j--;
        }
        else
            break;
    }
    cout<<st.size()<<"\n";
    cout<<s;
    cout<<"\n";
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}


