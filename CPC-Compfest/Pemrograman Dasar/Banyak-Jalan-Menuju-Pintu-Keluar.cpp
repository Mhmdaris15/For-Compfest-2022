#include <bits/stdc++.h>

using namespace std;

int find(int n, int m);

int main()
{
    int n, m;
    cin >> n >> m;
    cout << find(n, m) << endl;
    return 0;
}

int find(int n, int m)
{
    if (n == 1 || m == 1)
        return 1;
    else
        return find(n, m - 1) + find(n - 1, m);
}
