#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void indexout(char* s) {
	int idx = 0;

	while(*s != ' ') {
		s++;
		idx++;
	}
	return idx;	
}

int main(void) {
	char str1[50];
	char str2[50];
	int idx1, idx2;

	printf("Input str1: ");
	gets(str1);
	printf("Input str2: ");
	gets(str2);

	idx1 = indexout(str1);
	idx2 = indexout(str2);

	

}
