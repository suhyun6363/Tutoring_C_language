#include <stdio.h>
#include <string.h>

int main(void){
  char str1[20];
  char str2[20];
  char str3[40];

  printf("첫번째 문자열 입력: ");
  gets(str1);

  printf("두번째 문자열 입력: ");
  gets(str2);
  strcpy(str3, str1);
  strcat(str3, str2);
  printf("조합의 결과: %s \n", str3);

  return 0;
}