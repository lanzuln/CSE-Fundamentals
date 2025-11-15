#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  int mx = 0;
  for(int i =1; i<=N; i++){
    int x;
    scanf("%d", &x);
    if(x>mx){
    mx=x;
    }
  } 
  printf("%d", mx);
  return 0;
}