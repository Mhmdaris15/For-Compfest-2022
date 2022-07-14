#include <iostream>

using namespace std;

int main()
{
    int w = 0;
    cin >> w;
    string result = (w <= 2 || w % 2) ? "NO" : "YES";
    cout << result << endl;
    return 0;
}