// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     char a[n][n];
//     int onum=0, xnum=0;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cin>>a[i][j];
//             if(a[i][j]=='x')
//               xnum++;
//             else
//               onum++;
//         }
        
//     }
//     if(onum!=0 && xnum>onum )
//     {
//         cout<<"YES"<<"\n";
//     }
//     else
//     {
//         cout<<"NO"<<"\n";
//     }

//     return 0;
// }


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char board[n][n];
    bool even = true;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> board[i][j];
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (i - 1 >= 0 and board[i - 1][j] == 'o')
                c++;
            if (i + 1 < n and board[i + 1][j] == 'o')
                c++;
            if(j - 1 >= 0 and board[i][j - 1] == 'o')
                c++;
            if(j + 1 < n and board[i][j + 1] == 'o')
                c++;
            if (c % 2 == 1)
                even = false;
        }
    }

    if (even)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}