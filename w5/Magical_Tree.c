#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);


    int top_lines = (N + 11) / 2; 
    int max_stars = 2 * top_lines - 1;

    for(int i = 1; i <= top_lines; i++) {

        int stars = 2 * i - 1;                  
        int empty_space = (max_stars - stars) / 2;   

        
        for(int j = 0; j < empty_space; j++) {
            printf(" ");
        }

       
        for(int j = 0; j < stars; j++) {
            printf("*");
        }

        printf("\n");
    }


    int stem_lines = 5;
    int stem_spaces = (max_stars - N) / 2;

    for(int i = 0; i < stem_lines; i++) {
 
        for(int j = 0; j < stem_spaces; j++)
            printf(" ");


        for(int j = 0; j < N; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
