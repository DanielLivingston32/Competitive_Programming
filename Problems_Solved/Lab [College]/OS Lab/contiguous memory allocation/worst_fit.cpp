#include <stdio.h>

int main()
{

    int b, n, i, j, l = 0, d;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter the number of blocks: ");
    scanf("%d", &b);
    int bs[b], bn[b], ps[n], a[n];

    printf("\nEnter Block numbers: ");
    for (i = 1; i <= b; i++)
    {
        scanf("%d", &bn[i]);
    }

    printf("\nEnter Block sizes: ");
    for (i = 1; i <= b; i++)
    {
        scanf("%d", &bs[i]);
    }

    printf("\nEnter Process sizes: ");
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &ps[i]);
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= b; j++)
        {
            if (bs[j] != 0)
            {
                d = bs[j] - ps[i];
                if (d >= 0)
                {
                    if (l < d)
                    {
                        a[i] = j;
                        l = d;
                    }
                }
            }
        }
        bs[a[i]] = 0;
        l = 0;
    }

    printf("\nProcess no\tProcess size\tBlock no\n");
    for (i = 1; i <= n; i++)
    {
        if (a[i] > 0)
        {
            printf("%d\t\t%d\t\t%d\n", i, ps[i], a[i]);
        }
        else
        {
            printf("%d\t\t%d\t\tNot Allocated\n", i, ps[i]);
        }
    }
}

// 4
// 5
// 1 2 3 4 5
// 100 500 200 300 600
// 212 417 112 426