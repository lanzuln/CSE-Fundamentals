#include <stdio.h>

int main() {
    int T, M1, M2, D;
    scanf("%d", &T);
    
    while(T--) {
        scanf("%d %d %d", &M1, &M2, &D);
        
        int main_working = M1 * D;
        int update_farmers = M1 + M2;
        int new_days = main_working / update_farmers;
        int resting_days = D - new_days;
        
        printf("%d\n", resting_days);
    }
    
    return 0;
}