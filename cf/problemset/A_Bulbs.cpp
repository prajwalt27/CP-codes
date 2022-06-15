
/* Author : Prajwal Toundakar */

#include <bits/stdc++.h>
#define ll long long int
#define sumUpto(l, r) std::accumulate(a.begin() + l, a.begin() + r, 0)
#define ifPresent(t, a) find(a.begin(), a.end(), t)
#define fastIO                    \
	ios_base::sync_with_stdio(0); \
	cin.tie(0);                   \
	cout.tie(0);
#define fsort(a) sort(a.begin(), a.end())
#define rsort(a) sort(a.rbegin(), a.rend())
#define printv(a)         \
	for (int i : v)       \
	{                     \
		cout << i << " "; \
	}                     \
	cout << '\n';
#define vi vector<int>
#define vll vector<ll>
#define fri(n) for (ll i = 0; i < n; i++)
#define frj(n) for (ll j = 0; j < n; j++)
#define rfr(n) for (ll i = n - 1; i >= 0; i--)
#define yesOrNo(cond) cout << ((cond) ? "YES\n" : "NO\n");
#define lcm(a, b) (a * b) / (__gcd(a, b))
#define tc    \
	int t;    \
	cin >> t; \
	while (t--)
#define maxOfVec(a) *max_element(a.begin(), a.end())
#define minOfVec(a) *min_element(a.begin(), a.end())
#define log2(x) log(x) / log(2)
#define toupr(s) transform(s.begin(), s.end(), s.begin(), ::toupper)
#define tolwr(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
#define pb push_back
#define ms multiset
#define mp map

using namespace std;

char ad1, ad2, bd1, bd2;

bool isInt(double z)
{
	if (ceil(z) == floor(z))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool sortBySec(const pair<int, int> &a, const pair<int, int> &b)
{
	return (a.second > b.second);
}

bool isPrime(int number)
{

	if (number < 2)
		return false;
	if (number == 2)
		return true;
	if (number % 2 == 0)
		return false;
	for (int i = 3; (i * i) <= number; i += 2)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}

ll getNoDiv(ll x)
{
	ll fCount = 0;
	for (ll i = 1; i <= x; i++)
	{
		if (x % i == 0)
		{
			fCount++;
		}
	}
	return fCount;
}

int main()
{

	int n, m;
	cin >> n >> m;
	int a[n], b[m];
	fri(n)
	{
		cin >> a[i];
	}
	fri(m)
	{
		cin >> b[i];
	}
}