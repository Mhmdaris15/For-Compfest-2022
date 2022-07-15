#include <iostream>
using namespace std;

int main()
{
    int dim = 5, input = 0, count = -1;
    while (!input)
    {
        cin >> input;
        ++count;
    }
    int row = count / dim, col = count % dim;
    cout << abs(row - 2) + abs(col - 2) << endl;
    return 0;
}