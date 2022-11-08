#include <stdio.h>
int main(void) {
	char str1[50], str2[50];
	int str1idx = 0, str2idx = 0, num = 0;
	printf("input word:");
	scanf("%s", str1);

	while(str1[str1idx] != '\0'){
		str1idx++;
		num = str1idx;
	}
	for(int i = 0; i < num; i++) {
		str2[str2idx++] = str1[str1idx-1];
		str1idx--;
	}

	printf("word1: %s\n", str1);
	printf("word2: %s\n", str2);
}
