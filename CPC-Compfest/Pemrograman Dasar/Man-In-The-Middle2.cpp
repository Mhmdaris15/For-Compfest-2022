#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define fi first
#define se second
#define ld long double

int N, K;

vector<int> arr;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> K;
        arr.push_back(K);
    }

    int l = 0, r = N - 1;
    for (; l <= r;)
    {
        if (l <= r)
            cout << arr[l++] << " ";
        if (l <= r)
            cout << arr[l--] << " ";
    }
    cout << endl;

    return 0;
}