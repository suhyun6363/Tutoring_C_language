#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int num_extract(char s) {
	int n;

	if(s >= '0' && s <= '9')
	{
		n = s - '0'; 
			
	}

	else
		return 0;		
	return n;	
}

int main(void) {
	char* str;
	char string[100];
	int sum = 0, num, idx;

	printf("Inpust string: ");
	gets(string);
	idx = strlen(string);
	
	
	for(int i = 0; i<idx; i++) {
		num = num_extract(string[i]);
		sum += num;
		printf("%d\n", num);
	}
	printf("Sum: %d\n", sum);
}
