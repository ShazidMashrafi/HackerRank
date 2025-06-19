#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

void solve()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int mx_a = 0, mx_b = 0, mx_c = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            int a = i & j;
            int b = i | j;
            int c = i ^ j;
            if (a < k) mx_a = max(mx_a, a);
            if (b < k) mx_b = max(mx_b, b);
            if (c < k) mx_c = max(mx_c, c);
        }
    }
    printf("%d\n", mx_a);
    printf("%d\n", mx_b);
    printf("%d\n", mx_c);
}

int main()
{
    solve();
    return 0;
}