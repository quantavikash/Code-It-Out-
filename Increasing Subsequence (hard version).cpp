// PROBLEM NAME ------>>> C2. Increasing Subsequence (hard version)
// PROBLEM LINK ------>>>  https://codeforces.com/contest/1157/problem/C2

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
    ll n;
    cin>>n;
    ll a[n];
    for(ll i  =0;i<n;i++)
    {
        cin>>a[i];
    }
    ll i = 0,j=n-1;
    //char ch[n];
    string s;
    stack <int>st;
    while(i<=j)
    {
        if(st.empty())
        {
            if(a[i]<a[j])
            {
                st.push(a[i]);
                s.pb('L')   ;
                i++;
            }
            else if(a[i] > a[j])
            {
                st.push(a[j]);
                s.pb('R');
                j--;
            }
            else
            {
                string s1,s2;
                stack <int> st1,st2;
                st1.push(a[i]);
                s1.pb('L');
                for(ll k = i + 1;k<j;k++)
                {
                    if(a[k]>st1.top())
                    {
                        st1.push(a[k]);
                        s1.pb('L');
                    }
                    else
                        break;
                }
                st2.push(a[j]);
                s2.pb('R');
                for(ll k = j-1;k>i;k--)
                {
                    if(a[k] > st2.top())
                    {
                        st2.push(a[k]);
                        s2.pb('R');
                    }
                    else
                        break;
                }
                if(s2.length()>s1.length())
                    s += s2;
                else
                    s += s1;
                break;
            }
        }
        
        else if(a[i]>st.top())
        {
            if(a[j]>st.top())
            {
                if(a[i] < a[j])
                {
                    st.push(a[i]);
                    s.pb('L');
                    i++;
                }
                else if(a[i] > a[j])
                {
                    st.push(a[j]);
                    s.pb('R');
                    j--;
                }
                else
                {
                    string s1,s2;
                    stack <int> st1,st2;
                    st1.push(a[i]);
                    s1.pb('L');
                    for(ll k = i + 1;k<j;k++)
                    {
                        if(a[k]>st1.top())
                        {
                            st1.push(a[k]);
                            s1.pb('L');
                        }
                        else
                            break;
                    }
                    st2.push(a[j]);
                    s2.pb('R');
                    for(ll k = j-1;k>i;k--)
                    {
                        if(a[k] > st2.top())
                        {
                            st2.push(a[k]);
                            s2.pb('R');
                        }
                        else
                            break;
                    }
                    if(s2.length()>s1.length())
                        s += s2;
                    else
                        s += s1;
                    break;
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
    cout<<s.length()<<"\n";
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
