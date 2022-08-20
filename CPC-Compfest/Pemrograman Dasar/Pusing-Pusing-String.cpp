#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned short int n, q;
    cin >> n >> q;
    char str[n];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    while (q--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 1)
            swap(str[b - 1], str[c - 1]);
        else
            reverse(str + b - 1, str + c);
    }
    for (int i = 0; i < n; i++)
    {
        cout << str[i];
    }
    return 0;
}