#include <stdio.h>
#include <string.h>

int is_palindrome(char S[]) {
    int first = 0;
    int last = strlen(S) - 1;

    while(first < last) {
        if(S[first] != S[last]) {
            return 0; 
        }
        first++;
        last--;
    }

    return 1; 
}

int main() {
    char S[1001];
    scanf("%s", S); 

    int ans = is_palindrome(S); 

    if(ans == 1) {
        printf("Palindrome");
    } else {
        printf("Not Palindrome");
    }

    return 0;
}
