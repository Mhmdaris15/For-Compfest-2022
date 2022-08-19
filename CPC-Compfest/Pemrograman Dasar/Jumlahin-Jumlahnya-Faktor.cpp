#include <bits/stdc++.h>
using namespace std;

int factor_numbers(int n);

int main()
{
    unsigned short int n;
    cin >> n;
    cout << factor_numbers(n) << endl;
    return 0;
}

int factor_numbers(int n)
{
    // function to count the number of factors of a number
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        int factor = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                factor++;
            }
        }
        sum += factor;
    }
    return sum;
}