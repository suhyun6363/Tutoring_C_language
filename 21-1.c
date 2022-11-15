#include <stdio.h>
//if c1이 대문자 -> 소문자로 변환
//if c1이 소문자 -> 대문자로 변환
//c1 알파벳 아니면 error 출력

int change_alph (int ch){
	if(ch > 64 && ch < 91) {
		ch += 32;		
	}
	else if(ch > 96 && ch < 123) {
		ch -= 32;
	}
	else {
		ch = -1;
	}
	return ch;
}
int main(void) {
	int c1, mem;
	printf("input alphabet1: ");
	c1 = getchar();
	mem = change_alph(c1);
	if(mem == -1)
		printf("error!!\n");
	else {
		printf("return alphabet1: ");
		putchar(mem);
		printf("\n");
	}	

}
