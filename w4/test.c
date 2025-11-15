#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int start=1;
    int space =n-1;
    
    for(int i = 1; i <= n; i++) {
        for(int m = 1; m <= space; m++) {
            printf(" ");
        }


        for(int j = 1; j <= start; j++) {
           printf("*");
        }
         printf("\n");
         start++;
    space --;

    }
    
    return 0;
}