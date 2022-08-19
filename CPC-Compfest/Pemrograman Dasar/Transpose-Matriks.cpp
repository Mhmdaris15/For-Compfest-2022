#include <bits/stdc++.h>
using namespace std;

int main()
{
    // transpose matrix
    unsigned short int n, m;
    cin >> n >> m;
    unsigned short int matriks[n][m];
    for (unsigned short int i = 0; i < n; i++)
    {
        for (unsigned short int j = 0; j < m; j++)
        {
            cin >> matriks[i][j];
        }
    }
    for (unsigned short int i = 0; i < m; i++)
    {
        for (unsigned short int j = 0; j < n; j++)
        {
            cout << matriks[j][i] << " ";
        }
        cout << endl;
    }
    return 0;
}