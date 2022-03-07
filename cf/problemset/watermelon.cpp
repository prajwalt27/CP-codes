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
    
        int n;
        cin>>n;
        if(n%2==0 && n>2)
        {
            cout<<"YES"<<"\n";
        } 
        else{
            cout<<"NO"<<"\n";
        }

    
    return 0;
}