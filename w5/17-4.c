#include <stdio.h>

void recur(int i)
{
    if (i == 10)
    return;
    printf("%d\n", i);
    recur(i+1);
}

int main()
{
    int i = 1;
    recur(i);
    return 0;
}
