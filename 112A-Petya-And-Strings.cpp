#include <iostream>
using namespace std;

int main()
{
    string first, second;
    cin >> first >> second;
    int comparison = 0;
    for (int k = 0; k < first.length(); k++)
    {
        if (tolower(first[k]) < tolower(second[k]))
        {
            comparison = -1;
            break;
        }
        else if (tolower(first[k]) > tolower(second[k]))
        {
            comparison = 1;
            break;
        }
    }
    cout << comparison << endl;
    return 0;
}