#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while(T--) {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        long long three_num = A * B * C;

        
        if(three_num == 0) {
            if(M == 0) {
                printf("0\n");  
            } else {
                printf("-1\n");  
            }
        }
        
        else {
            if(M % three_num == 0) {
                long long missing_num = M / three_num;
                printf("%lld\n", missing_num);
            } else {
                printf("-1\n");  
            }
        }
    }

    return 0;
}
