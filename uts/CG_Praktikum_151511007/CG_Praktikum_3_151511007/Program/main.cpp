#include <stdio.h>
#include "library.h"

int main(int argc, char** argv) {
	initwindow(500, 500);
	
	point p;
	p.x = 400;
	p.y = 400;
	drawcircle360(p,200);
//	drawcircle90(p,200);
//	drawcircle45(p,200);
	
	getch();
	return 0;
}
