#include "library.h"

void drawcircle360(point midpoint, int r){
	puts("<-- draw a circle with 360 loop -->");
	point p;
	for(int i = 0;i <= 360; i++){
		p.x = midpoint.x + floor(r * (cos((M_PI / 180) * i)));
		p.y = midpoint.y + floor(r * (sin((M_PI / 180) * i)));
		putpx(p);
	}
}

void drawcircle90(point midpoint, int r){
	puts("<-- draw a circle with 90 loop -->");
	point p;
	for(int i = 0; i <= 90; i++){
		for(int j = 1; j <= 4; j++){
			p.x = midpoint.x + floor(r * (cos((M_PI / 180) * (90 * j + i))));
			p.y = midpoint.y + floor(r * (sin((M_PI / 180) * (90 * j + i))));
			putpx(p);
		} 
	}
}

void drawcircle45(point midpoint, int r){
	puts("<-- draw a circle with 45 loop -->");
	point p;
	for(int i = 0; i <= 45; i++){
		for(int j = 1; j <= 8; j++){
			p.x = midpoint.x + floor(r * (cos((M_PI / 180) * (45 * j + i))));
			p.y = midpoint.y + floor(r * (sin((M_PI / 180) * (45 * j + i))));
			putpx(p);
		}
	}
}

void putpx(point p,  int color, int mesc){
	printf("put pixel to %d,%d\n", p.x, p.y);
	delay(mesc);        
	putpixel(p.x, p.y, color);
}
