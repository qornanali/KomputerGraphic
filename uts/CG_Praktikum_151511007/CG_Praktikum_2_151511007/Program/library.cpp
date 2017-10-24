#include "library.h"

void drawddaline(point p1, point p2){
	puts("<-- draw a line using dda algorithm -->");
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
		putpx(p);      
		X += Xinc;               
		Y += Yinc;                    
	}
}

void drawmidpointline(point p1, point p2){
	puts("<-- draw a line using midpoint algorithm -->");
	int dx = p2.x - p1.x;
	int dy = p2.y - p1.y;
 
    int d = dy - (dx/2);
    point p;
    p.x = p1.x;
	p.y = p1.y;
	putpx(p);
 
    while (p.x < p2.x){
        p.x++;
        if (d < 0){
        	d = d + dy;	
		}else{
            d += (dy - dx);
            p.y++;
        }
        
		putpx(p); 
    }
}


void drawbresenhamline(point p1, point p2){
	puts("<-- draw a line using bresenham algorithm -->");
	int m_new = 2 * (p2.y - p1.y);    
	int slope_error_new = m_new - (p2.x - p1.x);    
	point p;
	for (p.x = p1.x, p.y = p1.y; p.x <= p2.x; p.x++){   
		putpx(p);             
		slope_error_new += m_new;            
		
		if (slope_error_new >= 0){          
			p.y++;          
			slope_error_new  -= 2 * (p2.x - p1.x);       
		}    
      
	} 
}

void putpx(point p,  int color, int mesc){
	printf("put pixel to %d,%d\n", p.x, p.y);
	delay(mesc);        
	putpixel(p.x, p.y, color);
}
