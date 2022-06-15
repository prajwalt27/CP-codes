#include <bits/stdc++.h>
using namespace std;

bool isthere(long num)
{
    if (num < 0)
    {
        num *= -1;
    }
    while (num > 0)
    {
        if (num % 10 == 8)
        {
            return true;
        }
        num /= 10;
    }
    return false;
}

int main()
{
  
    int p,q=0;
    cin>>p;
    while(p<=8888888888)
    {
        if(isthere(p) && q!=0)
        {
            break;
        }
        p++;
        q++;
    }
    cout<<q<<"\n";
    return 0;
}