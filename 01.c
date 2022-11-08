#include <stdio.h>
int main(void) {
	int num = 7;
	int* pnum;
	pnum = &num;
	printf("%p\n", pnum);
	printf("%d\n", *pnum);
}
