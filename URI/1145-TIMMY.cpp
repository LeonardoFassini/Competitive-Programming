#include <cstdio>

int main(void){
  int x, y;
  scanf("%d %d", &x, &y);
  for(int i = 1; i <=y; i++){
    printf("%d", i);
    if(i % x == 0 || i == y) printf("\n");
    else printf(" ");
  }
  return 0;
}