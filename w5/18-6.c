#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int arr[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // //specifiq row
//   int specifiq_r;
//     scanf("%d", &specifiq_r);

//     for (int i = 0; i < b; i++)
//     {
//         printf("%d ", arr[specifiq_r][i]);
        
//     }
    // specifiq column
    // int specifiq_c;
    // scanf("%d", &specifiq_c);

    // for (int i = 0; i < a; i++)
    // {
    //     printf("%d ", arr[i][specifiq_c]);
    // }



      int specifiq_c;
    scanf("%d", &specifiq_c);

    for (int i = 0; i < a; i++)
    {
        printf("%d \n", arr[i][specifiq_c]);
    }
    return 0;
}
