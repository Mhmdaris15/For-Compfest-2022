#include <iostream>

using namespace std;

int main()
{
    int threshold = 10;
    int num_words;
    string word;

    cin >> num_words;

    do
    {
        cin >> word;
        int inputSize = word.size();
        if (inputSize <= threshold)
        {
            cout << word << endl;
        }
        else
        {
            cout << word[0] << inputSize - 2 << word[inputSize - 1] << endl;
        }
    } while (--num_words);

    return 0;
}