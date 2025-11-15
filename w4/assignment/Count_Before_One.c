#include <stdio.h>

int count_before_one(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            return count;
        }
        count++;
    }
    return count;
}

int main()
{
    int N;
    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }
  
    printf("%d", count_before_one(A, N));

    return 0;
}
