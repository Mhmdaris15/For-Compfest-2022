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
    sort(scores, scores + n);
    int min = scores[n - k];
    int promoted = 0;
    while (promoted < n && scores[n - 1 - promoted] > 0 && scores[n - 1 - promoted] >= min)
    {
        ++promoted;
    };
    cout << promoted << endl;
    return 0;
}