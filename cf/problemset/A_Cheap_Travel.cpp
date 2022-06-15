/* By: Prajwal Toundakar */ 

#include<bits/stdc++.h>
using namespace std;
#define run ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define check int t; cin >> t; while(t--) 
#define pb(x) push_back(x)
#define rep(i,a,b) for(int i=a;i<b;++i)
#define per(i,a,b) for(int i=b;i<a;--i)
#define all(x) (x).begin(),(x).end()
#define ll long long
#define lli long long int
#define vi vector<int>
#define vll vector<ll>
#define vlli vector<lli>
#define mpi map<int,int>
#define mpl map<long,long>
#define pai pair<int,int>
#define seti set<int>
#define reseti unordered_set<int>
#define ins  insert
#define F first
#define S second
const ll M = 1000000007;


inline int gcd(int a, int b)          {if (b == 0) return a;    return gcd(b, a % b);}

bool isPrime(ll x)
{
   for (ll d = 2; d * d <= x; d++)
   {
         if (x % d == 0)
             return false;
    }
    return true;
}

int lcs(char* X, char* Y, int m, int n)
{
  if (m == 0 || n == 0)
      return 0;
  if (X[m - 1] == Y[n - 1])
     return 1 + lcs(X, Y, m - 1, n - 1);
  else
     return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n));
}


ll fact(ll n)
{
   ll res = 1, i;
   for (i = 2; i <= n; i++)
   {
      res=((res*i)%M);
    }
   return res;
}


ll nPr(ll n,ll r)
{ 
   return fact(n) /(fact(n - r));
}

bool isPalindrome(string str)
{
  ll low = 0,high = str.length() - 1;
  while (low < high)
  {
     if (str[low] != str[high])
           return false;
           low++,high--;
   }
   return true;
}


string decToBinary(ll n)
{
  ll binaryNum[65];
  ll i = 0;
  while (n > 0) 
  {
     binaryNum[i] = n % 2;
     n = n / 2;
     i++;
   }
   string str;
   for (ll j = i - 1; j >= 0; j--)
       str+=to_string(binaryNum[j]);
   return str;
}


void myAns()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m*a<=b)
    {
        cout<<n*a<<"\n";
    }
    else
    {
        int minval=min((n%m)*a,b);
        int specialval=(n/m)*b;
        cout<<specialval+ minval<<"\n";
    }
}


int32_t main()
{
 run
//  check
//  {

   

//  }
 myAns();
 return 0;
}