#include <bits/stdc++.h>
using namespace std;

// k is size of n[] and r[].
// Returns the smallest number x such that:
// x % num[0] = rem[0],
// x % num[1] = rem[1],
// ..................
// x % num[K-2] = rem[K-1]

int Solve(int n[], int r[], int K)
{
    int x = 1;
    // According to the Chinese remainder theorem, this loop will break always.
    while (true)
    {
        int i;
        for (i = 0; i < K; i++)
            if (x % n[i] != r[i])
                break;

        if (i == K)
            return x;

        x++;
    }

    return x;
}

int main(void)
{
    int n[] = {3, 4, 5};
    int r[] = {2, 3, 1};
    int K = sizeof(n) / sizeof(n[0]);
    cout << "The number is " << Solve(n, r, K);
    return 0;
}
