#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  for(int i=1; i<=N; i++){
    if(N%2==0){
      printf("%d", i);
    }
  }
  return 0;
}