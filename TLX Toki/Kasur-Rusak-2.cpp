#include <iostream>
using namespace std;

bool palindrom(string word);

int main()
{
    string word;
    cin >> word;
    bool result = palindrom(word);
    cout << (result ? "YA" : "TIDAK") << endl;
    return 0;
}

bool palindrom(string word)
{
    int len = word.length();
    string sub = word.substr(1, len - 2);
    return (word[0] == word[len - 1]) and palindrom(sub);
}