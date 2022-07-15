#include <iostream>
using namespace std;

int main()
{
    int x = 0;
    int num;
    string input = "";

    scanf("%d\n", &num); // read the number of bits to be flipped

    while (num--)
    {
        cin >> input;
        x = (input[1] == '+') ? ++x : --x;
    }
    cout << x << endl;
    return 0;
}