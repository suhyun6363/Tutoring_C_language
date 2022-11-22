#include <stdio.h>
#include <string.h>

int ConvToInt(char ch){
  return ch-'0';
}

int main(void){
  char str[50];
  int len, i;
  int sum =0;

  printf("문자열 입력: ");
  gets(str);

  len = strlen(str);

  for(i=0; i<len; i++){
    if(str[i]>='1' && str[i]<='9')
      sum +=  ConvToInt(str[i]);// 문자열의 각 문자를 숫자로 변환
  }
  printf("숫자의 합: %d \n", sum);
}