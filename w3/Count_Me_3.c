#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        char S[10001];
        scanf("%s", S);
        
        int uppercase = 0, lowercase = 0, digit = 0;
        int length = strlen(S);
        
        for (int i = 0; i < length; i++) {
            if (S[i] >= 'A' && S[i] <= 'Z') {
                uppercase++;

            } else if (S[i] >= 'a' && S[i] <= 'z') {
                lowercase++;

            } else if (S[i] >= '0' && S[i] <= '9') {
                digit++;
            }
        }
        
        printf("%d %d %d\n", uppercase, lowercase, digit);
    }
    
    return 0;
}