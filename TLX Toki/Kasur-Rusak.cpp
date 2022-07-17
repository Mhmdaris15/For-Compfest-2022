#include <iostream>
using namespace std;

string palindrom(string kalimat)
{

    if (kalimat.length() == 1)
    {
        return "YA";
    }
    else if (kalimat.length() == 2)
    {
        if (kalimat[0] == kalimat[1])
        {
            return "YA";
        }
    }
    else
    {
        if (kalimat.length() > 2 && kalimat[0] == kalimat[kalimat.length() - 1])
        {
            return palindrom(kalimat.substr(1, kalimat.length() - 2));
        }
        else
        {
            return "TIDAK";
        }
    }
}

int main()
{
    string kalimat;
    cin >> kalimat;
    cout << palindrom(kalimat) << endl;
    return 0;
};
