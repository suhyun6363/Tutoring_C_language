// 영단어 입력, 영단어 길이 출력

#include <stdio.h>

int main(void){
  char voca[100];
  int len =0;

  printf("영단어 입력: ");
  scanf("%s", voca);

  while(voca[len] != '\0'){
    len++;
  }
  printf("%d\n",len);
  printf("%d\n", voca[len]);

  printf("입력한 영단어의 길이는 %d입니다. \n", len);
  return 0;
}