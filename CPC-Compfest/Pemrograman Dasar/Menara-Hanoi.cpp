#include <bits/stdc++.h>

using namespace std;

void running(int n, char a, char b, char c);

int main()
{
    int n;
    cin >> n;
    running(n, 'A', 'C', 'B');
    return 0;
}

void running(int n, char a, char b, char c)
{
    if (n == 0)
        return;
    running(n - 1, a, c, b);
    cout << n << " " << a << " " << b << endl;
    running(n - 1, c, b, a);
}