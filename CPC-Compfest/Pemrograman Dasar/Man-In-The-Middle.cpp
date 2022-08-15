#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned short int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    if (n % 2 == 1)
    {
        for (int i = 0; i < (n / 2) + 1; i++)
        {
            if (i == (n / 2))
            {
                cout << arr[i] << endl;
            }
            else
            {
                cout << arr[i] << " " << arr[n - 1 - i] << " ";
            }
        }
    }
    else
    {
        for (int i = 0; i < (n / 2) + 1; i++)
        {
            cout << arr[i] << " " << arr[n - 1 - i] << " ";
        }
    }

    return 0;
}
