#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n, a, b, c;
    cin >> n >> a >> b;
    c = 0;
    for (int i = min(a, b); i <= n; i++)
    {
        if (i % a == 0 || i % b == 0)
            c++;
    }
    cout << c << endl;
    return 0;
}