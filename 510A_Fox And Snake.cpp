#include <bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{

    lli n, m;

    cin >> n >> m;
    lli i, j, c = 0;

    for (i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < m; j++)
            {
                {
                    cout << "#";
                }
            }
        }
        else
        {
            if (c % 2 == 0)
            {
                for (j = 0; j < m; j++)
                {
                    if (j != m - 1)
                    {
                        cout << ".";
                    }
                    else
                    {
                        cout << "#";
                        c++;
                    }
                }
            }
            else
            {
                for (j = 0; j < m; j++)
                {
                    if (j != 0)
                    {
                        cout << ".";
                    }
                    else
                    {
                        cout << "#";
                        c++;
                    }
                }
            }
        }
        cout << endl;
    }

    return 0;
}
