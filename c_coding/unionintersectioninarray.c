#include <stdio.h>
void main()
{
    int x[] = {1, 2, 3, 4, 5};
    int y[] = {4, 5, 6, 7, 8};
    int u[10];
    int c[10];
    int a = 0;
    // for intersection.
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (x[i] == y[j])
            {
                c[a] = x[i];
                a++;
            }
        }
    }
    printf("the intersection values are:\n");
    for (int i = 0; i < a; i++)
    {
        printf("%d\n", c[i]);
    }
    // for union.
    int b = 0;
    for (int i = 0; i < 5; i++)
    {
        u[b] = x[i];
        b++;
    }
    for (int i = 0; i < 5; i++)
    {
        int found = 0;
        for (int j = 0; j <= 5; j++)
        {
            if (y[i] == x[j])
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            u[b] = y[i];
            b++;
        }
    }
    printf("the union values are:\n");
    for (int i = 0; i < b; i++)
    {
        printf("%d\n", u[i]);
    }
}
