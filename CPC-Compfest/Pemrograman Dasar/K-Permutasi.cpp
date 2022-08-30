#include <bits/stdc++.h>

using namespace std;

int n, k, arr[25];
bool used[25];

void permutation(int x)
{
    if (x > n)
    {
        for (int i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++)
    {
        if (!used[i] && (x == 1 || abs(i - arr[x - 1]) <= k))
        {
            used[i] = true;
            arr[x] = i;
            permutation(x + 1);
            used[i] = false;
        }
    }
}

int main()
{
    cin >> n >> k;
    permutation(1);
}