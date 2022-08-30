#include <bits/stdc++.h>
using namespace std;

int *insertionSort(int *arr, int n);

int main()
{
    unsigned int long long n, q, a;
    cin >> n >> q;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    arr = insertionSort(arr, n);
    for (int i = 0; i < q; i++)
    {
        cin >> a;
        cout << arr[a - 1] << endl;
    }
    return 0;
}

int *insertionSort(int *arr, int n)
{
    int i, j, key;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    return arr;
}