#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int *scores = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> scores[i];
    };
    sort(scores, scores + n); // sort the scores in ascending order
    int min = scores[n - k];  // the minimum score of the last k students
    int promoted = 0;
    while (promoted < n && scores[n - 1 - promoted] > 0 && scores[n - 1 - promoted] >= min)
    {
        cout << scores[n - 1 - promoted] << ' ';
        ++promoted;
    };
    cout << "\n"
         << promoted << endl;
    return 0;
}