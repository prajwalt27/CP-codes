#include<bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double
#define vi vector<int>
#define vl vector<ll>
#define vb vector<bool>
#define pii pair<int,int>
#define pb push_back
#define sz(p) p.size()
#define l(p)  p.length()
#define all(p) p.begin(), p.end()
#define lpi(i, a, b) for (int i = a; i < b; i++)
#define lpd(i, a, b) for (int i = a; i >= b; i--)
#define tst  int T; cin >> T; while (T--)
#define fio   ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

int main()
{
    fio
    tst
    {    
        int x;
        cin>>x;

         string s;
         cin>>s;
         int k=0,tie=0,l=0;
         for(int i=0;i<14;i++)
         {
             if(s[i]=='C')
             {
                 k++;
             }
             else if(s[i]=='D')
             {
                 tie++;
             }
             else if(s[i]=='N')
             {
                 l++;
             }
         }
         
         if(k>l)
         {
             cout<<x*60<<"\n";
         }
         else if(k==l)
         {
             cout<<55*x<<"\n";
         }
         else
         {
             cout<<x*40<<"\n";
         }
    }
    return 0;
}