#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int items[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &items[i]);
    }

    int divided_2 = 0;
    int divided_3 = 0;

    for (int i = 0; i < N; i++)
    {
        if (items[i] % 2 == 0)
        {
            divided_2++;
        }
        else if (items[i] % 3 == 0)
        {
            divided_3++;
        }
    }

    printf("%d %d\n", divided_2, divided_3);


    return 0;
}