#include <stdio.h>
int main(void) {
	char str1[30];
	int idx = 0, num = 0, max = 0, posidx = 0;
	printf("input word: ");
	scanf("%s", str1);

	while(str1[idx] != '\0') {
		num = str1[idx];
		if(num > max) {
			max = num;
			posidx = idx; 	
		}
		idx++;
	}
	printf("max: %c\n", str1[posidx]);
}
