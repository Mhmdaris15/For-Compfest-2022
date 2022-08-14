#include <iostream>
using namespace std;

int main()
{
    unsigned short int a, b;
    unsigned long int x, y;
    cin >> a >> b >> x >> y;
    while (x <= y)
    {
        cout << x << endl;
        x = a * x + b;
    }

    return 0;
}