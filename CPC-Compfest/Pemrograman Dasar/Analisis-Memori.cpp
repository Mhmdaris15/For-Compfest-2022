#include <bits/stdc++.h>

using namespace std;

int memory_analizer(double n);

int main()
{
    long long n;
    cin >> n;
    cout << memory_analizer(n) << endl;
    return 0;
}

int memory_analizer(double n)
{
    if (n > 1)
        return 1 + memory_analizer(floor(n / 2)) + memory_analizer(ceil(n / 2));
    else
        return 1;
}