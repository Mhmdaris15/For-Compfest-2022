#include <iostream>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int theMax = 0;
    while (n--)
    {
        int a;
        cin >> a;
        theMax = max(theMax, a);
    }
    cout << theMax << endl;
    return 0;
}