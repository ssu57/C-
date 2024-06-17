#include<stdio.h>

int num[10000];

int main(void)
{
    int i, N, x;

    scanf_s("%d %d", &N, &x);

    for (i = 0; i < N; i++)
    {
        scanf_s("%d", &num[i]);
    }

    for (i = 0; i < N; i++)
        if (num[i] < x)
            printf("%d", num[i]);

    return 0;
}