#include <stdio.h>
#include <conio.h>
#include "library.h"

int main(int argc, char** argv) {
	initwindow(500, 500);
	
	int gd = DETECT, gm;
    initgraph (&gd, &gm, "");
	
	putpixel(50, 50, WHITE);
	line(5, 5, 100, 100);
	
	int j = 0;
	for(int i = 0; i < 168; i++){
		if(j > 9){
			j = 0;
		}
		printf("%d", j);
		j++;
	}

//	int j = 0;
//	for(int i = 0; i < 50; i++){
//		if(j > 9){
//			j = 0;
//		}
//		printf("%d\n", j);
//		j++;
//	}
	
	getch();
	return 0;
}
