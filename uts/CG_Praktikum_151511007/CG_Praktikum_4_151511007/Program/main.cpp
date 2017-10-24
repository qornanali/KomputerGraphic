#include <stdio.h>
#include "library.h"

int main(int argc, char** argv) {
	initwindow(500, 500);
	
	point p;
	p.x = 400;
	p.y = 400;
	drawellips90(p,200,100);
//	drawellips360(p,200,100);
	
	getch();
	return 0;
}
