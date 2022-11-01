#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define NUM 10

int main(void){
  int src[NUM], dst[NUM];
  int r_val, i,j;

  srand((unsigned long)time(NULL));
  for(i=0; i<NUM; i++){
    r_val = (rand() % 31) + 10;
    src[i] = r_val;
    printf("%d ", src[i]);
  }
  for(i=1, j=0; i<NUM; i+=2, j++){ // 1, 3, 5, 7, 9
    dst[j] = src[i];
    printf(" dst[j]: %d\t src[i]: %d\n ", dst[j], src[i]);
  }
      printf("=====\n");
  for(i=0, j=5; i<NUM; i+=2, j++){ // 1, 3, 5, 7, 9
    dst[j] = src[i];
    printf(" dst[j]: %d\t src[i]: %d\n ", dst[j], src[i]);
  }

}