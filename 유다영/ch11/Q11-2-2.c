// 영단어 입력->char형 배열 저장, 배열 역순으로 뒤집기

#include <stdio.h>

int main(void){
  char voca[100];
  int len =0, i;

  char temp;

  printf("영단어 입력: ");
  scanf("%s", voca);

  while(voca[len] != '\0'){
    len++;
  }
  for(i=0; i<len/2; i++){ // 영단어 뒤집기
    temp = voca[i]; // 앞에 문자 임시로 저장
    voca[i] = voca[len-1-i]; // 뒤의 문자 앞으로
    voca[len-1-i] = temp; // 앞의 문자를 뒤로
  }
  printf("뒤집힌 영단어: %s\n", voca);
  
}