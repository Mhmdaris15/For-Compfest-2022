#include <iostream>
using namespace std;

int main()
{
    short int a, b, c;
    cin >> a >> b >> c;
    string res = (a + b > c) && (a + c > b) && (b + c > a) ? "segitiga" : "bukan segitiga";
    cout << res << endl;
    return 0;
}