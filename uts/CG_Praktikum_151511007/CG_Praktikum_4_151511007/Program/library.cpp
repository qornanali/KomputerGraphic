#include "library.h"

void drawellips360(point midpoint, int r1, int r2){
	puts("<-- draw a ellips with 360 loop -->");
	point p;
	for(int i = 0; i <= 360; i++){
		p.x = midpoint.x + floor(r1 * (cos(i)));
		p.y = midpoint.y + floor(r2 * (sin(i)));
		putpx(p);
	}
}

void drawellips90(point midpoint, int r1, int r2){
	puts("<-- draw a ellips with 90 loop -->");
	point p;
	for(int i = 0; i <= 90; i++){
		for(int j = 1; j <= 4; j++){
			p.x = midpoint.x + floor(r1 * (cos(90 * j + i)));
			p.y = midpoint.y + floor(r2 * (sin(90 * j + i)));
			putpx(p);
		}
	}
}

void putpx(point p,  int color, int mesc){
	printf("put pixel to %d,%d\n", p.x, p.y);
	delay(mesc);        
	putpixel(p.x, p.y, color);
}
