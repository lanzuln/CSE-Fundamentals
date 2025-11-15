#include <stdio.h>

int main() {
   int X;
   scanf("%d", &X);
   int dig=X/1000;
   if(dig%2 == 0){
    printf("EVEN");
   }else{
    printf("ODD");
   };
  return 0;
}