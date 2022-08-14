#include <iostream>
using namespace std;
int main()
{
    unsigned short int n;
    long res = 0;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        res += arr[i];
    }
    cout << res << endl;
    return 0;
}