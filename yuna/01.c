#include <stdio.h>

int main()
{
	int num = 7;
	int * pnum;
	pnum = &num;
	printf("%p\n",pnum);
}
