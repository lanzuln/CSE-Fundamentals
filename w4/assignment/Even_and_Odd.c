#include <stdio.h>

void odd_even()
{

    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
  

    int even_arr=0;
    int odd_arr=0;
    for (int i = 0; i < N; i++)
    {
        if (A[i]%2 == 0)
        {
            even_arr++;
        }else{
            odd_arr++;
        }
    }
    printf("%d %d", even_arr, odd_arr);
}

int main()
{
    odd_even();

    return 0;
}
