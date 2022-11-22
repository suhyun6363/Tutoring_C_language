#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int GetSpaceIdx(char *str){ // char str[]와 동일
  int i;
  for(i=0; i<strlen(str); i++){
    if(str[i]==' ')
      return i;
  }
  return -1; // 공백 문자 존재하지 않는 경우 반환
}
int CompName(char str1[], char str2[]){
  int idx1=GetSpaceIdx(str1);
  int idx2=GetSpaceIdx(str2);
  int ag1, ag2;
  ag1=atoi(&str1[idx1+1]); // str1[idx1+1] 나이가 저장된 위치
  ag2=atoi(&str2[idx2+1]); // str2[idx2+1] 나이가 저장된 위치
  if(ag1==ag2)
    return 1;
  else
    return 0;
}
int main(void){
  char str1[20];
  char str2[20];

  printf("첫번째 사람 정보 입력: ");
  gets(str1);

  printf("두번째 사람 정보 입력: ");
  gets(str2);

  if(CompName(str1, str2))
    puts("이름이 동일합니다!");
  else
    puts("이름이 동일하지 않습니다!");

  if(CompName(str1, str2))
    puts("나이가 같습니다!");
  else
    puts("나이가 같지 않습니다!");

  return 0;
}