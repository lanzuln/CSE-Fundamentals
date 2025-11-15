#include <stdio.h>

int main() {
   int A;
   int B;
   scanf("%d %d", &A, &B);
   if(A%B == 0 || B%A == 0  ){
    printf("Multiples");
   }else{
    printf("No Multiples");
   };
  return 0;
}