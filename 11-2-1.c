#include <stdio.h>
int main(void) {
	char str[30];
	int idx = 0;
	printf("input string:");
	scanf("%s", str);

	while(str[idx] != '\0') {
		idx++;
	}
	printf("string num: %d\n", idx);
}
