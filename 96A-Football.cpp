#include <iostream>
using namespace std;

int main()
{
    string players;
    string output = "Safe";

    cin >> players;

    int len = players.length();
    int state = 9;
    int runningSum = 0;

    for (int i = 0; i < len; i++)
    {
        if (state != players[i])
        {
            state = players[i];
            runningSum = 0;
        }
        ++runningSum;
        if (runningSum >= 7)
        {
            output = "Dangerous";
            break;
        }
    }

    cout << output << endl;
    return 0;
}