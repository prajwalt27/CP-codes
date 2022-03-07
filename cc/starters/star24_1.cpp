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
         int p;
         cin>>p;
         if(p==1)
         {
             cout<<"1"<<"\n";
         }
         else if(p==2)
         {
             cout<<"2"<<"\n";
         }
         else{
             if(p%2==2)
             {
                 cout<<(p/2+2)<<"\n";
             }
             else{
                 cout<<(p/2+1)<<"\n";
             }

         }

    }
    return 0;
}
