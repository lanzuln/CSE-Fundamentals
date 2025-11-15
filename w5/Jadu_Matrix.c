#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    int a[105][105];

    if(N != M) {
        printf("NO");
        return 0;
    }


    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

   
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < N; j++) {

            if(i == j) {
                if(a[i][j] != 1) {
                    printf("NO");
                    return 0;
                }
            }

            else if(i + j == N - 1) {
                if(a[i][j] != 1) {
                    printf("NO");
                    return 0;
                }
            }

            else {
                if(a[i][j] != 0) {
                    printf("NO");
                    return 0;
                }
            }
        }
    }

    printf("YES");
    return 0;
}
