#include <cstdio>
using namespace std;

int main()
{
    int numProblems, a = 0, b = 0, c = 0, solved = 0;
    scanf("%d\n", &numProblems);
    while (--numProblems)
    {
        scanf("%d %d %d\n", &a, &b, &c);
        if ((a + b + c) > 1)
        {
            ++solved;
        }
    };
    printf("%d \n", solved);
    return 0;
}