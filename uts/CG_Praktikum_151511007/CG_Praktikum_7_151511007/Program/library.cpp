#include "library.h"

void drawline(point p1, point p2, int color){
//	puts("<-- draw a line using dda algorithm -->");
	int dx = p2.x - p1.x;
	int dy = p2.y - p1.y;
	
	int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);
	
	float Xinc = dx / (float) steps;
	float Yinc = dy / (float) steps;
	
	float X = p1.x;
	float Y = p1.y;
	
	point p;
	for (int i = 0; i <= steps; i++){         
		p.x = X;
		p.y = Y;
		putpx(p, color);      
		X += Xinc;               
		Y += Yinc;                    
	}
}

void drawcircle(point midpoint, int r, int color){
//	puts("<-- draw a circle with 45 loop -->");
	point p;
	for(int i = 0; i <= 45; i++){
		for(int j = 1; j <= 8; j++){
			p.x = midpoint.x + floor(r * (cos((M_PI / 180) * (45 * j + i))));
			p.y = midpoint.y + floor(r * (sin((M_PI / 180) * (45 * j + i))));
			putpx(p, color);
		}
	}
}

void putpx(point p,  int color){
	putpixel(p.x, p.y, color);
}

point initPoint(int x, int y){
	point p;
	p.x = x;
	p.y = y;
	return p;
}
