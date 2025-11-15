#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 1; i <= N; i++)
    {

        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

        char num;
        if (i % 2 == 1)
        {
            num = '#';
        }
        else
        {
            num = '-';
        }

        int char_row = 2 * i - 1;
        for (int k = 1; k <= char_row; k++)
        {
            printf("%c", num);
        }

        printf("\n");
    }

    // Bottom Part
    for (int i = N - 1; i >= 1; i--)
    {

        for (int j = 1; j <= N - i; j++)
        {
            printf(" ");
        }

         char num;
        if (i % 2 == 1)
        {
            num = '#';
        }
        else
        {
            num = '-';
        }

         int char_row = 2 * i - 1;
        for (int k = 1; k <= char_row; k++)
        {
            printf("%c", num);
        }

        printf("\n");
    }

    return 0;
}
