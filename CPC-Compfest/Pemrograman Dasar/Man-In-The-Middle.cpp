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
    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[i] << " " << arr[n - 1 - i] << " ";
    }
    if (n % 2 == 1)
    {
        cout << arr[n / 2] << endl;
    }
    return 0;
}
