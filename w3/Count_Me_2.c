#include <stdio.h>


int main()
{


    char N[1000001];
    scanf("%s", &N);
    int lenght = strlen(N);
    int consonent = 0;

    for (int i = 0; i < lenght; i++)
    {
        char letter = N[i];
        if(letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u'){
            consonent++;
        }

    }


    printf("%d\n", consonent);

    return 0;
}