#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[20];
	char str2[20];
	char str3[20];

	printf("Input str1: ");
	gets(str1);
	printf("Input str2: ");
	gets(str2);

	strncpy(str3, str1, sizeof(str1));
	strncat(str3, str2, sizeof(str2));

	puts(str3);

}
