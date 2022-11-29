#include <stdio.h>

typedef struct point {
	int xpos;
	int ypos;
} Point;

void SwapPoint(Point* p1, Point* p2) {
	int tmpx, tmpy;
	
	tmpx = p1->xpos;
	p1->xpos = p2->xpos;
	p2->xpos = tmpx;
	
	tmpy = p1->ypos;
	p1->ypos = p2->ypos;
	p2->ypos = tmpy;
	
	printf("Point pos1 = {%d, %d}\n", p1->xpos, p1->ypos);
	printf("Point pos2 = {%d, %d}\n", p2->xpos, p2->ypos);
}

int main(void) {
	Point pos1;
	Point pos2;

	pos1.xpos = 2;
	pos1.ypos = 4;
	printf("Point pos1 = {%d, %d}\n", pos1.xpos, pos1.ypos);

	pos2.xpos = 5;
	pos2.ypos = 7;
	printf("Point pos2 = {%d, %d}\n", pos2.xpos, pos2.ypos);

	printf("\n");
	SwapPoint(&pos1, &pos2);	
}
