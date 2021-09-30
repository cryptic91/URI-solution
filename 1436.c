// Brick Game
#include <stdio.h>

int main()
{

    int t, n, arr[12], x = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n);

        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }

        if (n % 2 != 0)
        {
            x = n / 2;
            // x++;
            printf("Case %d: %d\n",i+1,arr[x]);
        }

    }

    return 0;
}