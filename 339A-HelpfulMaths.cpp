#include <iostream>
using namespace std;

int main()
{
    string operation;
    cin >> operation;
    int len = operation.length();
    int *arr = new int[len / 2];
    for (int k = 0; k < operation.length(); k += 2)
    {
        *arr[k / 2] = operation[k];
        cout << arr[k / 2] << endl;
    }
    return 0;
}