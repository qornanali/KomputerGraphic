#include <stdio.h>
#include "library.h"

int main(int argc, char** argv) {
	initwindow(500, 500);
	
	point p1, p2;
	p1.x = 10;
	p1.y = 10;
	p2.x = 100;
	p2.y = 20;
//	drawmidpointline(p1, p2);
//	drawddaline(p1, p2);
	drawbresenhamline(p1, p2);
	
	getch();
	return 0;
}
