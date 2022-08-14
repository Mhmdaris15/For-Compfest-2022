#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    // int *numbers = new int[n];
    int numbers[n + 1];
    memset(numbers, 0, sizeof(numbers));
    for (int i = 0; i < k; i++)
    {
        int a;
        cin >> a;
        numbers[a]++;
    }
    for (int i = 1; i <= n; i++)
    {
        if (numbers[i] > 0)
            continue;
        else
            cout << i << " ";
    }

    return 0;
}