#include <iostream>

using namespace std;

int main()
{
    unsigned short int n, m, l;
    char s;
    cin >> n >> m >> l;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i < l || i > n - l - 1)
            {
                cout << "*";
            }
            else
            {
                s = (j < l) ? '*' : '.';
                cout << s;
            }
        }
        cout << endl;
    }
}