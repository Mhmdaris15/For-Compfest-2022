#include <iostream>

using namespace std;

int main()
{
    unsigned short int a, b, c, x;
    cin >> a >> b >> c >> x;
    unsigned short int count = 0;
    unsigned short int currentPosition = x;
    unsigned short int teleportPosition;
    do
    {
        teleportPosition = (a * currentPosition + b) % c;
        currentPosition = teleportPosition;
        count++;
    } while (teleportPosition != x);
    cout << count << endl;
    return 0;
}