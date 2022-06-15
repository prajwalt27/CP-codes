#include<bits/stdc++.h>
using namespace std;

struct ch
{
	int num;
	char c;
};

vector<ch>v;
vector<int>v1;
int main()
{
	int n;
	string a;
	while(cin>>n>>a)
	{
		sort(a.begin(),a.end());
		if(n==1)
		{
			cout<<a<<endl;
			continue;
		}
		v.clear();
		v1.clear();
		int L=a.length();
		for(int i=0;i<L;i++)
		{
			bool flag=false;
			for(int k=0;k<v.size();k++)
			{
				if(v[k].c==a[i])
				{
					v[k].num++;
					flag=true;
					break;
				}
			}
			if(flag==false)
			{
				ch cc;
				cc.c=a[i];
				cc.num=1;
				v.push_back(cc);
			}
		}
		int j;
		int s=v.size();
		for(j=0;j<v.size();j++)
		{
			int r=v[j].num%n;
			int r1=v[j].num/n;
			v1.push_back(r1);
			if(r!=0)
				break;
		}
		if(j!=s)
		{
			cout<<-1<<endl;
			continue;
		}
		else
		{
			for(int t=0;t<n;t++)
			{
				for(int j=0;j<v.size();j++)
				{
					for(int k=0;k<v1[j];k++)
						cout<<v[j].c;
				}
			}
			cout<<endl;
		}
	}
}