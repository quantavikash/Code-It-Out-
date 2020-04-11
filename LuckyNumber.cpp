// PROBLEM NAME ------>>> LuckyNumbers
// PROBLEM LINK ------>>>  https://codeforces.com/problemset/problem/96/B

//---------------------------------------------------------------------------------------------------------------

#include <bits/stdc++.h>
#define lli long long int
#define pb push_back


using namespace std;
void feelok(vector <int > &vect , int n, int c4, int c7)
{
    while(c4)
    {
        vect[n] = 4;
        n--;
        c4--;
    }
    while(c7)
    {
        vect[n] = 7;
        n--;
        c7--;
    }
}

void solve()
{
       // cout<<log10(1000)   ;
       lli num,temp;
       cin>>num;
       vector <int > v;
       int n = log10(num) + 1;
       bool ok = 0;
       temp = num;
       while(temp)
       {
           //x = num%10;
           v.pb(temp%10);
           temp/= 10;
       }

       if(n%2 == 1)
       {
           v.pb(4);
           ok = 1;
           n++;
       }

       int c4 = n/2,c7 = n/2,i = n-1;
       if(ok)
       {
           feelok(v,n-1,c4,c7);

       }
       else
       {
           for(int i = 0;i<c7;i++)
           {
               temp  = temp*10 + 7;
           }
           for(int i = 0;i<c4;i++)
           {
               temp = temp*10 + 4;
           }
           if(num>temp)
           {
               v.pb(4);
               v.pb(4);
               n += 2;
               c4++;
               c7 ++;
               ok  = 1;
               feelok(v,n-1,c4,c7);
           }
           else
           {
               i = n - 1;
               while(i>=0)
               {
                   if(v[i]<4)
                   {
                       if(c4)
                       {
                           v[i] = 4;
                           ok = 1;c4--;
                       }
                       else
                       {
                           v[i] = 7;
                           ok = 1;
                           c7--;
                       }
                   }
                   else if(v[i] == 4)
                   {
                       if(c4)
                       {
                           c4--;
                       }
                       else
                       {
                           v[i] = 7;
                           ok = 1;
                           c7--;
                       }
                   }
                   else if(v[i] < 7)
                   {
                       if(c7)
                       {
                           //if(c7<)
                           v[i] = 7;
                           c7--;
                           ok = 1;
                       }
                       else
                       ;
                   }
                   else if(v[i] == 7)
                   {
                       if(c7)
                       {
                           c7--;
                       }
                       else
                       {
                        for(int j = i+ 1;j<n;j++)
                        {
                           if(v[j] == 4)
                           {
                               v[j] = 7;
                               c7--;
                              // v[i] = 4;
                               c4++;
                                ok = 1;
                                i = j;
                                break;
                           }
                           else
                           {
                               c7++;
                           }
                        }
                       }
                   }
                   else
                   {
                       for(int j = i+ 1;j<n;j++)
                        {
                           if(v[j] == 4)
                           {
                               v[j] = 7;
                               c7--;
                              // v[i] = 4;
                               c4++;
                                ok = 1;
                                i = j;
                                break;
                           }
                           else
                           {
                               c7++;
                           }
                        }
                   }
                   i--;
                   if(ok)
                   {
                       feelok(v,i,c4,c7);
                       break;
                   }
               }
           }

       }

       lli ans = 0;
       for(int i = n-1;i>=0;i--)
       {
           ans = ans*10 + v[i];
       }
       cout<<ans<<"\n";




}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
