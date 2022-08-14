#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;
    if (a[0] >= 'a' && a[0] <= 'z')
    {
        cout << "kata" << endl;
    }
    else if (a[0] == '0')
    {
        cout << "nol" << endl;
    }
    else if (a[0] == '-')
    {
        cout << "bilangan bulat negatif" << endl;
    }
    else
    {
        cout << "bilangan bulat positif" << endl;
    }

    return 0;
}