#include <stdio.h>
int main(void) {
	int num1 = 10, num2 = 20;
	int* ptr1, * ptr2;
	ptr1 = &num1;
	ptr2 = &num2;

	(*ptr1)+=10;
	(*ptr2)-=10;

	ptr1 = &num2;
	ptr2 = &num1;

	printf("ptr1 = %d\n", *ptr1);
	printf("ptr2 = %d\n", *ptr2);

}
